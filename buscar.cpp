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

void buscar();


string rutaArchivo;
string texto;
string palabras_copia;
string frase;
int cont=0;
int cant_caracteres=0;
int opcion;






void buscar(){
	ifstream archivo;
	string palabra;
	char verif='f';
	archivo.open("texto.txt",ios::out);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	cout<<"\nIngrese la palabra para buscar: ";cin>>palabra;
	while(!archivo.eof()){
		getline(archivo,texto,' ');
		if(texto[texto.size()-1]=='.' or texto[texto.size()-1]==',' or texto[texto.size()-1]==';'){
			texto.erase(texto.size()-1);
		}
		if(palabra==texto){
			
			verif='t';
			break;
		}
	}
	if(verif='t'){
		cout<<"La palabra se encuentra en el texto";
	}
	else{
		cout<<"La palabra no se encuentra en el texto";
	}
	cout<<"\n";
}
