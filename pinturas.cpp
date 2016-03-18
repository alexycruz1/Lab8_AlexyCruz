#include "pinturas.h"
#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pinturas::Pinturas(string nombre, string autor, string fecha_ingreso, string material, string tecnica):Obras(nombre, autor, fecha_ingreso), material(material), tecnica(tecnica){
}

Pinturas::Pinturas(const Pinturas& p):Obras(p), material(p.material), tecnica(p.tecnica){
}

Pinturas::~Pinturas(){
}

string Pinturas::toString()const{
	stringstream ss;
	ss << Obras::toString() << "Pintura: " << material;
	return ss.str();
}