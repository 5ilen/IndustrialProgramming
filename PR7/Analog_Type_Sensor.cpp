#include <iostream>
#include <string>

class AnalogSensor {
private:
	int value;
public:

	void Sensor_Result() {
		std::cout << "The sensor gave a value: " << value << std::endl << std::endl;
	}
	void Set_Value(int x) {
		value = x;
	}

};

int main() {
    AnalogSensor sensor;
	std::string action;
	bool b;

	std::cout << "Has the item been completed? (Y if Yes/N if No)" << std::endl << std::endl;
	std::cin >> action;

	b = action[0] == 'Y';
	if (b) {
		sensor.Set_Value(1);
	}else sensor.Set_Value(0);
	sensor.Sensor_Result();
	return 0;
}