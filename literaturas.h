#pragma once
#include "obras.h"
#include <string>
#include <vector>
using std::string;

class Literaturas : public Obras{
	string genero_lit;
	string epoca;
  public:
  	Literaturas(string, string, string, string, string);
	Literaturas(const Literaturas&);
	~Literaturas();
	string toString()const;
};