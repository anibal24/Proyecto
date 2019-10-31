#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
#include<windows.h>
void alinear_izquierda(){
	ifstream archivo;
	archivo.open("texto.txt",ios::out);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		contador=0;
		cantidad_caracteres=0;
		while(cantidad_caracteres<90){
			getline(archivo,palabras_copia, ' ');
			if((cantidad_caracteres+palabras_copia.size())>=90){
				break;
			}
			cout<<palabras_copia<<" ";
			cantidad_caracteres+=palabras_copia.size()+1;
			if(archivo.eof()){
				break;
			}
		}
     	cout<<"\n";
	}
	archivo.close();
}
