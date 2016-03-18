#include "esculturas.h"
#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Esculturas::Esculturas(string nombre, string autor, string fecha_ingreso, string peso, string material):Obras(nombre, autor, fecha_ingreso), peso(peso), material(material){
}

Esculturas::Esculturas(const Esculturas& p):Obras(p), peso(p.peso), material(p.material){
}

Esculturas::~Esculturas(){
}

string Esculturas::toString()const{
	stringstream ss;
	ss << Obras::toString() << "Esculturas: " << peso << ", " << material;
	return ss.str();
}