#pragma once
#include <string>
#include <vector>
using std::vector;
using std::string;

class Obras{
	string nombre;
	string autor;
	string fecha_ingreso;
  public:
  	Obras(string, string, string);
	Obras(const Obras&);
	~Obras();
	string toString()const;
};