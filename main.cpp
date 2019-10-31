#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
#include<windows.h>
using namespace std;
#include "Alinear_derecha.cpp"
#include "Aliniear_izquierda.cpp"
#include "buscar.cpp"
#include "cantidad_palabras.cpp"
#include "leer.cpp"
#include "menu.cpp"


int main(){
	setlocale(LC_ALL, "spanish");
	menu();
	return 0;
}
