#include <iostream>

class matrix {
public:
	int get_lines(matrix &);//
	int get_columns(matrix &);//

	//matrix(int l = 0, int c = 0, int **buf = NULL);

	matrix(int lines=1,int columns=1);//
	matrix(const matrix &m);//
	~matrix();//

    matrix& operator=(const matrix& m);//

	matrix& operator+=(const matrix &m);//
	matrix& operator-=(const matrix &m);//
	matrix& operator*=(const matrix &m);//

	matrix& operator+=(double scalar);//
	matrix& operator-=(double scalar);//
	matrix& operator*=(double scalar);//
	matrix& operator/=(double scalar);//

    matrix operator[](int pos);//

	friend std::istream &operator>>(std::istream &in,matrix &m);//
	friend std::ostream &operator<<(std::ostream &out,const matrix &m);//

	friend matrix operator+(const matrix m1,const matrix m2);//
	friend matrix operator-(const matrix m1,const matrix m2);//
	friend matrix operator*(const matrix m1,const matrix m2);//
	friend matrix operator+(const matrix m, double scalar);//
	friend matrix operator-(const matrix m, double scalar);//
	friend matrix operator*(const matrix m, double scalar);//
	friend matrix operator/(const matrix m, double scalar);
	friend matrix operator+(double scalar,const matrix m1);//
	friend matrix operator-(double scalar,const matrix m1);//
	friend matrix operator*(double scalar,const matrix m1);//
	friend matrix operator/(double scalar,const matrix m);//
	friend matrix operator^(const matrix m, int pow);//

    friend matrix operator+(const matrix& m);//
    friend matrix operator-(const matrix& m);//

    friend bool operator==(const matrix& m1,const matrix& m2);//
    friend bool operator!=(const matrix& m1,const matrix& m2);//
private:
	int m_lines, m_columns;
	double **m_buffer;

};

