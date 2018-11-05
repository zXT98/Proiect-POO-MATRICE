#include "matrix.hpp"
#include <iostream>
#include <stdlib.h>


int main(int argc, char** argv)
{
    matrix m1(3,3);
	matrix m2(3,3);
    int scalar=0;

	std::cout<<"Matricea 1: "<<std::endl;
	std::cin>>m1;
	std::cout<<"Matricea 2: "<<std::endl;
	std::cin>>m2;

	///std::cout<<"Matricea m1 este: "<<std::endl<<m1<<std::endl;
    ///std::cout<<"Matricea m2 este: "<<std::endl<<m2<<std::endl;

    ///matrix cop(m1);
	///std::cout<<"Copia matricei 1: "<<std::endl<<cop<<std::endl;


    /*try{
    std::cout<<"Adunarea a doua matrice: "<<std::endl<<m1+m2<<std::endl;
    }catch(int x){
        if(x==10) std::cout<<"Nu are loc adunarea!"<<std::endl;
    }*/


   /*try{
    std::cout<<"Scaderea a doua matrice: "<<std::endl<<m1-m2<<std::endl;
    }catch(int x){
        if(x==20) std::cout<<"Nu are loc scaderea!"<<std::endl;
    }*/


    /*try{
    std::cout<<"Inmultirea a doua matrice: "<<std::endl<<m1*m2<<std::endl;
    }catch(int x)
    {
        if(x==30) std::cout<<"Nu are loc inmultirea!"<<std::endl;
    }*/


    ///std::cout<<"Adunarea cu un scalar: "<<std::endl<<m1+scalar<<std::endl;
    ///std::cout<<"Scaderea cu un scalar: "<<std::endl<<m1-scalar<<std::endl;
    ///std::cout<<"Inmultirea cu un scalar: "<<std::endl<<m1*scalar<<std::endl;

    /*try{
    std::cout<<"Impartirea cu un scalar: "<<std::endl<<m1/scalar<<std::endl;
    }catch(int x)
    {
        if(x==40) std::cout<<"Nu are loc impartirea!"<<std::endl;
    }*/


    /*try{
    std::cout<<"Matrice la putere: "<<std::endl<<(m1^(3))<<std::endl;
    }catch(int x)
    {
        if(x==50) std::cout<<"Nu are loc ridicarea la putere!"<<std::endl;
    }*/


    ///std::cout<<std::endl<<(m1[0])<<std::endl;

    ///std::cout<<"Operatorul unar +: "<<std::endl<<+m1<<std::endl;
    ///std::cout<<"Operatorul unar -: "<<std::endl<<-m1<<std::endl;

    ///+=
    /*try{
    m1+=m2;
    std::cout<<" += cu 2 matrice: "<<std::endl<<m1<<std::endl;
    }catch(int x)
    {
        if(x==10) std::cout<<"Nu are loc adunarea!"<<std::endl;
    }*/

    ///-=
    /*try{
    m1-=m2;
    std::cout<<" -= cu 2 matrice: "<<std::endl<<m1<<std::endl;
    }catch(int x)
    {
        if(x==20) std::cout<<"Nu are loc scaderea!"<<std::endl;
    }*/

    ///*=
    /*try{
    m1*=m2;
    std::cout<<" *= cu 2 matrice: "<<std::endl<<m1<<std::endl;
    }catch(int x)
    {
        if(x==30) std::cout<<"Nu are loc inmultirea!"<<std::endl;
    }*/


    ///m1+=3;
    ///std::cout<<" += cu scalar: "<<std::endl<<m1<<std::endl;

    ///m1-=5;
    ///std::cout<<" -= cu scalar: "<<std::endl<<m1<<std::endl;

    ///m1*=3;
    ///std::cout<<" *= cu scalar: "<<std::endl<<m1<<std::endl;


    /*try{
    m1/=0;
    std::cout<<" /= cu scalar: "<<std::endl<<m1<<std::endl;
    }catch(int x)
    {
        if(x==40) std::cout<<"Nu are loc impartirea!"<<std::endl;
    }*/


    ///std::cout<<"Matrice egale?"<<std::endl<<(m1==m2)<<std::endl;
    ///std::cout<<"Matrice diferite?"<<std::endl<<(m1!=m2)<<std::endl;

    std::cout<<std::endl;
	system("PAUSE");
	system("CLS");

	return 0;

}
