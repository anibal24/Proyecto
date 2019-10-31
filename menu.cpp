#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
#include<windows.h>


void menu();


void menu(){
	char salir;
	setlocale(LC_ALL, "spanish");
	do{
		cout << "Menu: \n";
        cout << "1. Leer archivo \n";
        cout << "2. Alinear a la izquierda \n";
        cout << "3. Alinear a la derecha \n";
        cout << "4. Buscar palabra \n";
        cout << "5. Hallar la cantidad de veces que se repite una palabra \n";
		cout<<"\nIngrese opcion: ";cin>>opcion;
		switch(opcion){
			case 1:
				leer();
				break;
			case 2:
				alinear_izquierda();
				break;
			case 3:
				alinear_derecha();
				break;
			case 4:
				buscar();
				break;
			case 5:
				cantidad();
				break;
		}
		cout<<"Desea salir? Presione 'y' si de salir o 'n' de lo contrario:";
		cin>>salir;
		cout<<"\n";
	}while(salir!='y');
}
