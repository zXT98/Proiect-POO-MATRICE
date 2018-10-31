#include "matrix.hpp"


int matrix::get_lines(matrix& a){
return a.m_lines;
};


int matrix::get_columns(matrix& a){
return a.m_columns;
};


/*
matrix::matrix(int l, int c, int** buf) {
	if (l == 0)
		m_lines = 3;
	else
		m_lines = l;
	if (c == 0)
		m_columns = 3;
	else
		m_columns = c;
	if (**buf == NULL) {
		m_buffer = new int*[3];
		for (int i = 0; i<3; i++) {
			m_buffer[i] = new int[3];
			for (int j = 0; j<3; j++)
				m_buffer[i][j] = 0;
		}
		for (int i = 0; i<3; i++)
			m_buffer[i][i] = 1;
	}
	else
	{
		m_buffer = new int*[l];
		for (int i = 0; i<m_lines; i++) {
			m_buffer[i] = new int[c];
			for (int j = 0; j<m_columns; j++)
				m_buffer[i][j] = buf[i][j];
		}
	}
}*/


matrix::matrix(int lines,int columns)
{
    m_lines=lines;
    m_columns=columns;
    m_buffer=new int* [m_lines];
     for(int i=0;i<m_lines;i++)
        m_buffer[i]=new int [m_columns];
        if(m_lines==m_columns)
        {
            for(int i=0;i<m_lines;i++)
            {
               for(int j=0;j<m_columns;j++)
                    if(i==j)
                      m_buffer[i][j]=1;
                    else
                    m_buffer[i][j]=0;
            }
        }
}


matrix::matrix(const matrix &m)
{
    m_lines=m.m_lines;
    m_columns=m.m_columns;
    m_buffer=new int* [m_lines];
     for(int i=0;i<m_lines;i++){
        m_buffer[i]=new int [m_columns];
          for(int j=0;j<m_columns;j++)
            m_buffer[i][j]=m.m_buffer[i][j];
     }
}


matrix::~matrix() {
	if (m_buffer != NULL)
	{
		for (int i = 0; i<m_lines; i++)
			delete[]m_buffer[i];
		delete[] m_buffer;
	}
}


std::istream &operator>>(std::istream &in,matrix &m)
{
    for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
    {
        in>>m.m_buffer[i][j];
    }
    return in;
}


std::ostream &operator<<(std::ostream &out,const matrix &m)
{
    for(int i=0;i<m.m_lines;i++){
        for(int j=0;j<m.m_columns;j++){

        out<<m.m_buffer[i][j]<<' ';

    }
}
    return out;
}


matrix operator+(const matrix m1,const matrix m2)
{
    matrix result(m1.m_lines,m1.m_columns);
     for(int i=0;i<m1.m_lines;i++)
        for(int j=0;j<m1.m_columns;j++)
          result.m_buffer[i][j]=m1.m_buffer[i][j]+m2.m_buffer[i][j];
     return result;
}


matrix operator+(const matrix m,int scalar)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]+scalar;
     return result;
}


matrix operator+(int scalar,const matrix m)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]+scalar;
     return result;
}


matrix operator-(const matrix m1,const matrix m2)
{
    matrix result(m1.m_lines,m1.m_columns);
     for(int i=0;i<m1.m_lines;i++)
        for(int j=0;j<m1.m_columns;j++)
          result.m_buffer[i][j]=m1.m_buffer[i][j]-m2.m_buffer[i][j];
     return result;
}


matrix operator-(const matrix m,int scalar)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]-scalar;
     return result;
}


matrix operator-(int scalar,const matrix m)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]-scalar;
     return result;
}


matrix operator*(const matrix m1,const matrix m2)
{
    matrix result(m1.m_lines,m1.m_columns);
    for(int i=0;i<m1.m_lines;i++)
     for(int j=0;j<m1.m_columns;j++)
        result.m_buffer[i][j]=0;

        for(int i=0;i<m1.m_lines;i++)
        {
            for(int j=0;j<m2.m_columns;j++)
                {
              for(int k=0;k<m1.m_lines;k++)
                 result.m_buffer[i][j]=result.m_buffer[i][j]+m1.m_buffer[i][k]*m2.m_buffer[k][j];
       }
     }

        return result;
}


matrix operator*(const matrix m,int scalar)
{
    matrix result(m.m_lines,m.m_columns);
    for(int i=0;i<m.m_lines;i++){
     for(int j=0;j<m.m_columns;j++)
            result.m_buffer[i][j]=m.m_buffer[i][j]*scalar;
    }

        return result;
}


matrix operator*(int scalar,const matrix m)
{
    matrix result(m.m_lines,m.m_columns);
    for(int i=0;i<result.m_lines;i++)
     for(int j=0;j<result.m_columns;j++){
            result.m_buffer[i][j]=m.m_buffer[i][j]*scalar;
    }

        return result;
}


matrix operator/(const matrix m,int scalar)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]/scalar;
     return result;
}


matrix operator/(int scalar,const matrix m)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
          result.m_buffer[i][j]=m.m_buffer[i][j]/scalar;
     return result;
}

/*matrix operator^(const matrix &m,int pow)
{
    matrix result(m.m_lines,m.m_columns);
     for(int i=0;i<m.m_lines;i++)
        for(int j=0;j<m.m_columns;j++)
           result.m_buffer[i][j]=1;

    if(pow>30){  std::cout<<"Exceptie.Putere prea mare"<<endl;}
    else{
        for(int k=2;k<pow;k++)
            result=m*m;}
        return result;

}*/
/*matrix operator^(const matrix &m,int pow)
{  matrix result(m);
     if(pow>30){  std::cout<<"Exceptie.Putere prea mare"<<endl;}
     else{
        for(int k=0;k<pow-1;k++)
            result*=m;
     }
     return result;
}*/


matrix operator+(matrix m)
{
    matrix result(m);

    return result;
}

/*matrix& matrix::operator+()
{


    return *this;
}*/




matrix& matrix::operator+=(const matrix& m){
	if (this->m_buffer== NULL || m.m_buffer==NULL)
		{
			cout<<"Adunarea nu a fost facuta!"<<endl;
			return *this;
 		}
	if (m_lines!=m.m_lines || m.m_columns!=m_columns)
		{
			cout<<"Adunarea nu a fost facuta!"<<endl;
			return *this;
 		}
	for(int i=0;i<m_lines;i++)
		for(int j=0;j<m_columns;j++)
			m_buffer[i][j]=m_buffer[i][j]+m.m_buffer[i][j];
	return *this;
}


matrix& matrix::operator+=(int scalar){
	for(int i=0;i<m_lines;i++)
		for(int j=0;j<m_columns;j++)
			m_buffer[i][j]=m_buffer[i][j]+scalar;
	return *this;
}


matrix& matrix::operator-=(const matrix& m){
	if (this->m_buffer== NULL || m.m_buffer==NULL)
		{
			cout<<"Scaderea nu a fost facuta!"<<endl;
			return *this;
 		}
	if (m_lines!=m.m_lines || m.m_columns!=m_columns)
		{
			cout<<"Scaderea nu a fost facuta!"<<endl;
			return *this;
 		}
	for(int i=0;i<m_lines;i++)
		for(int j=0;j<m_columns;j++)
			m_buffer[i][j]=m_buffer[i][j]-m.m_buffer[i][j];
	return *this;
}





/*matrix& matrix::operator=(const matrix& m){
	m_lines=m.m_lines;
	m_columns=m.m_columns;
	m_buffer=new int*[m_lines];
	for(int i=0;i<m_lines;i++){
		m_buffer[i]=new int[m_columns];
		for(int j=0;j<m_columns;j++)
			m_buffer[i][j]=m.m_buffer[i][j];
	}
	return *this;
}*/
