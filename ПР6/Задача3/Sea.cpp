#include "Sea.h"
#include "Ocean.h"
#include <iostream>

Sea::Sea() : Ocean()
{
	name = nullptr;
	location = nullptr;
	size = 0;
	depth = 0;
	surfaceArea = 0;
}

Sea::Sea(std::string name, std::string location, double size, double depth, double surfaceArea) : Ocean(name, location, size, depth, surfaceArea)
{
	this->name = name;
	this->location = location;
	this->size = size;
	this->depth = depth;
	this->surfaceArea = surfaceArea;
}

std::ostream& operator<<(std::ostream& out, Sea sea)
{
	out << " >> Море " << std::endl;
	out << "Название: " << sea.name << std::endl;
	out << "Местоположение: " << sea.location << std::endl;
	out << "Размер: " << sea.size << std::endl;
	out << "Глубина: " << sea.depth << std::endl;
	out << "Площадь: " << sea.surfaceArea << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Sea sea)
{
	std::cout << " >> Море " << std::endl;
	std::cout << "Название: ";
	in >> sea.name;
	std::cout << "Местоположение: ";
	in >> sea.location;
	std::cout << "Размер: ";
	in >> sea.size;
	std::cout << "Глубина: ";
	in >> sea.depth;
	std::cout << "Площадь: ";
	in >> sea.surfaceArea;
	return in;
}