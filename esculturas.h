#pragma once
#include "obras.h"
#include <string>
#include <vector>
using std::string;

class Esculturas : public Obras{
	string peso;
	string material;
  public:
  	Esculturas(string, string, string, string, string);
	Esculturas(const Esculturas&);
	~Esculturas();
	string toString()const;
};