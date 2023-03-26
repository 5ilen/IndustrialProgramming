#include "Bay.h"
#include "Sea.h"
#include "Ocean.h"
#include <iostream>
#include <msxml.h>

Bay::Bay() : Ocean() 
{
	name = nullptr;
	location = nullptr;
	size = 0;
	depth = 0;
	surfaceArea = 0;
}
Bay::Bay(std::string name, std::string location, double size, double depth, double surfaceArea) : Ocean(name, location, size, depth, surfaceArea)
{
	this->name = name;
	this->location = location;
	this->size = size;
	this->depth = depth;
	this->surfaceArea = surfaceArea;
}

std::ostream& operator<<(std::ostream& out, Bay bay)
{
	out << " >> Залив " << std::endl;
	out << "Название: " << bay.name << std::endl;
	out << "Местоположение: " << bay.location << std::endl;
	out << "Размер: " << bay.size << std::endl;
	out << "Глубина: " << bay.depth << std::endl;
	out << "Площадь: " << bay.surfaceArea << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Bay bay)
{
	std::cout << " >> Залив " << std::endl;
	std::cout << "Название: ";
	in >> bay.name;
	std::cout << "Местоположение: ";
	in >> bay.location;
	std::cout << "Размер: ";
	in >> bay.size;
	std::cout << "Глубина: ";
	in >> bay.depth;
	std::cout << "Площадь: ";
	in >> bay.surfaceArea;
	return in;
}