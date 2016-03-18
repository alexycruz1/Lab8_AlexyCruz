#pragma once
#include <string>
#include "obras.h"
#include <vector>
using std::string;

class Disenos : public Obras{
	string tipo_terreno;
  public:
  	Disenos(string, string, string, string);
	Disenos(const Disenos&);
	~Disenos();
	string toString()const;
};