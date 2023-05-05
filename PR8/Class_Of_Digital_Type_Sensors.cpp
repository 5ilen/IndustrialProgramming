#include <iostream>

class DigitalSensor {
private:
	float value;

public:
	void GetValue(float x) {
		value = x / 10; //заданная точность
	}
	void ShowValue() {
		std::cout << "The sensor gave the value:" << value << std::endl << std::endl;
	}
};

int main() {
	DigitalSensor sensor;
	float a = 0;
	std::cout << "Enter the quantity of the item in the cell: ";
	std::cin >> a;
	std::cout << std::endl;

	sensor.GetValue(a);
	sensor.ShowValue();

	return 0;
}