#pragma once
#include <string>
#include <iostream>

class Ocean
{
protected:
	std::string name;
	std::string location;
	double size;
	double depth;
	double surfaceArea;

public:
	Ocean();
	Ocean(std::string name, std::string location, double size, double depth, double surfaceArea);

	std::string getName();
	std::string getLocation();
	double getSize();
	double getDepth();
	double getSurfaceArea();

	void setName(std::string name);
	void setLocation(std::string location);
	void setSize(double size);
	void setDepth(double depth);
	void setSurfaceArea(double surfaceArea);

	friend std::ostream& operator<<(std::ostream& out, Ocean ocean);
	friend std::istream& operator>>(std::istream& in, Ocean ocean);
};