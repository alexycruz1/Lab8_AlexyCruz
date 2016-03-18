#include "disenos.h"
#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Disenos::Disenos(string nombre, string autor, string fecha_ingreso, string tipo_terreno):Obras(nombre, autor, fecha_ingreso), tipo_terreno(tipo_terreno){
}

Disenos::Disenos(const Disenos& p): Obras(p), tipo_terreno(p.tipo_terreno){
}

Disenos::~Disenos(){
}

string Disenos::toString()const{
	stringstream ss;
	ss << Obras::toString() << "Disenos: " << tipo_terreno;
	return ss.str();
}