#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Obras::Obras(string nombre, string autor, string fecha_ingreso):nombre(nombre), autor(autor), fecha_ingreso(fecha_ingreso){
}

Obras::Obras(const Obras& p):nombre(p.nombre), autor(p.autor), fecha_ingreso(p.fecha_ingreso){
}

Obras::~Obras(){
}

string Obras::toString()const{
	stringstream ss;
	ss << "Obra: " << nombre << ", " << autor << ", " << fecha_ingreso << " ";
	return ss.str();
}