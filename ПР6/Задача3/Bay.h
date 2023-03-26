#pragma once
#include <string>
#include <iostream>
#include "Ocean.h"

class Bay : public Ocean
{
	Bay() : Ocean() {}
	Bay(std::string name, std::string location, double size, double depth, double surfaceArea) : Ocean(name, location, size, depth, surfaceArea) {}

	friend std::ostream& operator<<(std::ostream& out, Bay bay);
	friend std::istream& operator>>(std::istream& in, Bay bay);
};