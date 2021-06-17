
// Incluindo as bibliotecas
#include <bits/stdc++.h>//All basic librarys
#include "include/COMPLEXO.hpp"

//definindo variáveis usadas nas operações
#define PI 3.14159265358979323846
#define rad2deg (180/PI)
#define deg2rad (PI/180)
	
using namespace std;

int main() {
	cout << endl;
	operacao operacao;
	
	num_complexo c1(6,-4);
	num_complexo c2(4,2);
	
	num_complexo r1 = operacao.soma(c1,c2);
	num_complexo r2 = operacao.sub(c1,c2);
	num_complexo r3 = operacao.mult(c1,c2);
	num_complexo r4 = operacao.div(c1,c2);
	
	cout<< "Numero complexo 1 [c1]: Re = " << c1.r <<" Im = " << c1.i <<" Modulo = "<< c1.m << " Argumento = "<< c1.a <<endl;
	cout<< "Numero complexo 2 [c2]: Re = " << c2.r <<" Im = " << c2.i <<" Modulo = "<< c2.m << " Argumento = "<< c2.a <<endl;
	cout<< "c1 + c2: Re = " << r1.r <<" Im = " << r1.i << endl;
	cout<< "c1 - c2: Re = " << r2.r <<" Im = " << r2.i << endl;
	cout<< "c1 * c2: Re = " << r3.r <<" Im = " << r3.i << endl;
	cout<< "c1 / c2: Re = " << r4.r <<" Im = " << r4.i << endl;

	return 0;
}