#include "literaturas.h"
#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Literaturas::Literaturas(string nombre, string autor, string fecha_ingreso, string genero_lit, string epoca): Obras(nombre, autor, fecha_ingreso), genero_lit(genero_lit), epoca(epoca){
}

Literaturas::Literaturas(const Literaturas& p):Obras(p), genero_lit(p.genero_lit), epoca(p.epoca){
}

Literaturas::~Literaturas(){
}

string Literaturas::toString()const{
	stringstream ss;
	ss << Obras::toString() << "Literaturas: " << genero_lit << ", " << epoca;
	return ss.str();
}