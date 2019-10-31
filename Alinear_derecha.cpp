#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
#include<windows.h>
void alinear_derecha(){
	ifstream archivo;
	int cantidad_lineas=0;
	archivo.open("texto.txt",ios::out);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		int cantidad_palabras=0;
		cantidad_caracteres=0;
		palabras_copia=" ";
		while(cantidad_palabras<16){
			if(cantidad_caracteres<80){
				getline(archivo,texto,' ');
				palabras_copia+=texto+" ";
				cantidad_caracteres+=texto.size()+1;
				if(archivo.eof()){
					break;
				}
				cantidad_palabras++;
			}
			else{
				break;
			}
		}
		tabulador((100-cantidad_caracteres),cantidad_lineas);
		cout<<palabras_copia<<endl;
		cantidad_lineas++;
	}
	archivo.close();
}
