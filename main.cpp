#include "obras.h"
#include "literaturas.h"
#include "esculturas.h"
#include "pinturas.h"
#include "disenos.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char* argv[]){
	vector <Obras> lista;
	int opcion = 1;

	while(opcion != 7){
		cout << "--------------------------------------" << endl;
		cout << "1.- Crear Literatura                 |" << endl
			<< "2.- Crear esculturas                 |" << endl
			<< "3.- Crear pinturas                   |" << endl
			<< "4.- Crear disenos                    |" << endl
			<< "5.- Transferir                       |" << endl
			<< "6.- Reportes                         |" << endl
			<< "7.- Salir                            |" << endl
			<< "Ingrese la opcion que desee: " << endl;
		cin >> opcion;	
		cout << "--------------------------------------" << endl << endl;

		if (opcion == 1){
			string nombre, autor, fecha, genero_lit, epoca;

			cout << "Ingrese el nombre de la obra: ";
			cin >> nombre;

			cout << "Ingrese el nombre del autor: ";
			cin >> autor;

			cout << "Ingrese la fecha en que entro la obra: ";
			cin >> fecha;

			cout << "Ingrese el genero literario: ";
			cin >> genero_lit;

			cout << "Ingrese la epoca de la obra literaria: ";
			cin >> epoca;

			Literaturas p(nombre, autor, fecha, genero_lit, epoca);
			lista.push_back(p);

		}else if(opcion == 2){
			
		}else if(opcion == 3){

		}else if(opcion == 4){

		}
	}

	return 0;
}