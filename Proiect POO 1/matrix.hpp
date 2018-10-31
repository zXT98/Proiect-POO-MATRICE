#include <iostream>


using namespace std;

class matrix {
public:
	int get_lines(matrix &);//
	int get_columns(matrix &);//

	//matrix(int l = 0, int c = 0, int **buf = NULL);

	matrix(int lines=1,int columns=1);//
	matrix(const matrix &m);//
	~matrix();//

	matrix& operator+=(const matrix &m);
	matrix& operator+=(int scalar);
	matrix& operator-=(const matrix &m);
	matrix& operator-=(int scalar);
	matrix& operator*=(const matrix &m);
	matrix& operator*=(int scalar);
	matrix& operator/=(int scalar);

    matrix &operator[](int pos);

	friend std::istream &operator>>(std::istream &in,matrix &m);//
	friend std::ostream &operator<<(std::ostream &out,const matrix &m);//
	friend matrix operator+(matrix m1, matrix m2);//
	friend matrix operator-(matrix m1, matrix m2);//
	friend matrix operator*(matrix m1, matrix m2);//
	friend matrix operator+(const matrix m, int scalar);//
	friend matrix operator+(int scalar,const matrix m1);//
	friend matrix operator-(const matrix m, int scalar);//
	friend matrix operator-(int scalar,const matrix m1);//
	friend matrix operator*(const matrix m, int scalar);//
	friend matrix operator*(int scalar,const matrix m1);//
	friend matrix operator/(const matrix m, int scalar);
	friend matrix operator/( int scalar,const matrix m);//
	friend matrix operator^(const matrix &m, int pow);//

	//matrix operator[](int pos);

    matrix &operator+();
    matrix &operator-();
private:
	int m_lines, m_columns;
	int **m_buffer;

};

