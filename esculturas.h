#pragma once
#include "obras.h"
#include <string>
#include <vector>
using std::string;

class Esculturas : public Obras{
	int peso;
	string material;
  public:
  	Esculturas(string, string, string, int, string);
	Esculturas(const Esculturas&);
	~Esculturas();
	string toString()const;
};