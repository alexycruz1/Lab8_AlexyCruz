#pragma once
#include <string>
#include "obras.h"
#include <vector>
using std::string;

class Pinturas : public Obras{
	string material;
	string tecnica;
  public:
  	Pinturas(string, string, string, string, string);
	Pinturas(const Pinturas&);
	~Pinturas();
	string toString()const;
};