#pragma once
#include <string>
#include <iostream>
#include "Ocean.h"

class Sea : public Ocean
{
public:
	Sea() : Ocean() {}
	Sea(std::string name, std::string location, double size, double depth, double surfaceArea) : Ocean(name, location, size, depth, surfaceArea) {};

	friend std::ostream& operator<<(std::ostream& out, Sea sea);
	friend std::istream& operator>>(std::istream& in, Sea sea);
};