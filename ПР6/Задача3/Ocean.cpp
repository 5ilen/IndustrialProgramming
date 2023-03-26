#include "Ocean.h"
#include <iostream>

Ocean::Ocean()
{
	name = nullptr;
	location = nullptr;
	size = 0;
	depth = 0;
	surfaceArea = 0;
}

Ocean::Ocean(std::string name, std::string location, double size, double depth, double surfaceArea)
{
	this->name = name;
	this->location = location;
	this->size = size;
	this->depth = depth;
	this->surfaceArea = surfaceArea;
}

std::string Ocean::getName() { return name; }
std::string Ocean::getLocation() { return location; }
double Ocean::getSize() { return size; }
double Ocean::getDepth() { return depth; }
double Ocean::getSurfaceArea() { return surfaceArea; }

void Ocean::setName(std::string name)
{
	this->name = name;
}

void Ocean::setLocation(std::string location)
{
	this->location = location;
}

void Ocean::setSize(double size)
{
	this->size = size;
}

void Ocean::setDepth(double depth)
{
	this->depth = depth;
}

void Ocean::setSurfaceArea(double surfaceArea)
{
	this->surfaceArea = surfaceArea;
}

std::ostream& operator<<(std::ostream& out, Ocean ocean)
{
	out << " >> Океан " << std::endl;
	out << "Название: " << ocean.name << std::endl;
	out << "Местоположение: " << ocean.location << std::endl;
	out << "Размер: " << ocean.size << std::endl;
	out << "Глубина: " << ocean.depth << std::endl;
	out << "Площадь: " << ocean.surfaceArea << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Ocean ocean)
{
	std::cout << "Введите название: ";
	in >> ocean.name;
	std::cout << "Введите местоположение: ";
	in >> ocean.location;
	std::cout << "Введите размер: ";
	in >> ocean.size;
	std::cout << "Введите глубину: ";
	in >> ocean.depth;
	std::cout << "Введите площадь: ";
	in >> ocean.surfaceArea;
	return in;
}