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

void cantidad();

string rutaArchivo;
string texto;
string palabras_copia;
string frase;
int cont=0;
int cant_caracteres=0;
int opcion;

void cantidad(){
	ifstream archivo;
	string palabra;
	cont=0;
	bool verif=false;
	archivo.open("texto.txt",ios::out);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	cout<<"\nIngrese una palabra: ";cin>>palabra;
	while(!archivo.eof()){
		getline(archivo,texto,' ');
		if(texto[texto.size()-1]=='.' or texto[texto.size()-1]==',' or texto[texto.size()-1]==';'){
			texto.erase(texto.size()-1);
		}
		if(palabra==texto){
			verif=true;
			cont++;
		}
	}
	if(verif=true){
		cout<<"Se repite "<<cont<< " veces";
	}
	else{
		cout<<"La palabra no se encuentra en el texto";
	}
	cout<<"\n";
}
