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

string rutaArchivo;

void leer(){
	cout <<"Ingrese la ruta del archivo que desea leer: "; cin >> rutaArchivo;
    char cRutaArchivo [rutaArchivo.size()];
    strcpy(cRutaArchivo,rutaArchivo.c_str());
    ifstream file;
    file.open(cRutaArchivo);
    string myStr;
    ofstream archivo;
    archivo.open("texto.txt",ios::out);
    if(file.is_open()){
        while(getline(file,myStr)){
            cout << myStr;
		//Funcion Guardar:
            archivo<<myStr; //Guarda el contenido de myStr en el archivo "Texto.txt" y lo guarda en la carpeta donde se encuentra el programa. .
        }
        cout <<"\nSe esta leyendo el archivo!\n";
    }
    else
        cout <<"No se pudo abrir el archivo!\n";
}
