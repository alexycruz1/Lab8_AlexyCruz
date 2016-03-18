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
	vector <Obras> transferencias;
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
			cout << endl;

			Literaturas p(nombre, autor, fecha, genero_lit, epoca);
			lista.push_back(p);

		}else if(opcion == 2){
			string nombre, autor, fecha, material;
			int peso;

			cout << "Ingrese el nombre de la obra: ";
			cin >> nombre;

			cout << "Ingrese el nombre del autor: ";
			cin >> autor;

			cout << "Ingrese la fecha en que entro la obra: ";
			cin >> fecha;

			cout << "Ingrese el peso de la escultura: ";
			cin >> peso;

			cout << "Ingrese el material con que fue hecha la escultura: ";
			cin >> material;
			cout << endl;

			Esculturas p(nombre, autor, fecha, peso, material);
			lista.push_back(p);
		}else if(opcion == 3){
			string nombre, autor, fecha, material, tecnica;

			cout << "Ingrese el nombre de la obra: ";
			cin >> nombre;

			cout << "Ingrese el nombre del autor: ";
			cin >> autor;

			cout << "Ingrese la fecha en que entro la obra: ";
			cin >> fecha;

			cout << "Ingrese el material del lienzo: ";
			cin >> material;

			cout << "Ingrese la tecnica con que fue hecha la pintura: ";
			cin >> tecnica;
			cout << endl;

			Pinturas p(nombre, autor, fecha, material, tecnica);
			lista.push_back(p);
		}else if(opcion == 4){
			string nombre, autor, fecha, tipo_terreno;

			cout << "Ingrese el nombre de la obra: ";
			cin >> nombre;

			cout << "Ingrese el nombre del autor: ";
			cin >> autor;

			cout << "Ingrese la fecha en que entro la obra: ";
			cin >> fecha;

			cout << "Ingrese el tipo de terreno sobre el cual se hizo el diseno arquitectonico: ";
			cin >> tipo_terreno;
			cout << endl;

			Disenos p(nombre, autor, fecha, tipo_terreno);
			lista.push_back(p);
		}else if (opcion == 5){
			int posicion;
			int cont = 0;

			for (int i = 0; i < lista.size(); i++){
				cout << i << ".-" << lista[i].toString() << endl;
			}

			if (lista.size() > 0){
				cout << "Ingrese la obra que desea transferencias: ";
				cin >> posicion;

				transferencias.push_back(lista[posicion]);
				lista.erase(lista.begin() + posicion);	
			}	
		}else if (opcion == 6){
			int opcion2;

			cout << "--------------------------------------" << endl;
			cout << "1.- Reporte de museo                 |" << endl
				<< "2.- Reporte de transeferencias       |" << endl
				<< "Ingrese la opcion que desee: " << endl;
			cin >> opcion2;	
			cout << "--------------------------------------" << endl << endl;

			if (opcion2 == 1){
				cout << "El reporte del museo es: " << endl;

				for (int i = 0; i < lista.size(); i++){
					cout << i << ".-" << lista[i].toString() << endl;
				}
			}else if (opcion2 == 2){
				cout << "El reporte de transferencias es: " << endl;

				for (int i = 0; i < transferencias.size(); i++){
					cout << i << ".-" << transferencias[i].toString() << endl;
				}
			}
		}
	}

	return 0;
}