#include "matrix.hpp"
#include <iostream>
#include <stdlib.h>


int main(int argc, char** argv) {

	matrix m1(3,3);
	matrix m2(3,3);
    //matrix m3=m1[2];
	int scalar=3;
	std::cout<<"Matricea 1: "<<endl;
	std::cin>>m1;
	//std::cout<<"Matricea 2: "<<endl;
	//std::cin>>m2;
	///std::cout<<"Matricea m1 este: "<<std::endl<<m1<<std::endl;
    ///std::cout<<"Matricea m2 este: "<<std::endl<<m2<<std::endl;

    ///std::cout<<"Adunarea a doua matrice: "<<std::endl<<m1+m2;
    ///std::cout<<"Adunarea cu un scalar: "<<std::endl<<m1+scalar;

    ///std::cout<<"Scaderea a doua matrice: "<<std::endl<<m1-m2<<std::endl;
    ///std::cout<<"Scaderea cu un scalar: "<<std::endl<<m1-scalar<<std::endl;

    ///std::cout<<"Inmultirea a doua matrice: "<<std::endl<<m1*m2<<std::endl;
    ///std::cout<<"Inmultirea cu un scalar: "<<std::endl<<m1*scalar<<std::endl;

    ///std::cout<<"Impartirea cu un scalar: "<<std::endl<<m1/scalar<<std::endl;

    std::cout<<"Matrice la putere: "<<std::endl<<m1^2<<std::endl;

    std::cout<<"Operatorul unar +: "<<std::endl<<+m1;
    //std::cout<<m2^2;
    ///matrix cop(m1);
	///std::cout<<"Copia matricei 1: "<<std::endl<<cop;

    ///m1+=m2;
    ///std::cout<<" += cu 2 matrice"<<std::endl<<m1;
    ///m1+=3;
    ///std::cout<<" += cu scalar"<<std::endl<<m1;

    ///m1-=m2;

    std:cout<<endl;
	system("PAUSE");
	system("CLS");

	return 0;

}