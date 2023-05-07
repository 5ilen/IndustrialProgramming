#include <iostream>
class DigitalSensor {
private:
    float value;
public:
    void GetValue(float val) {
        value = val;
    }
    void SensorResult() {
        std::cout << "The sensor gives the value: "<< value << std::endl << std::endl;
    }
};

int main() {
    float answer;
    DigitalSensor digitalSensor;
    std::cout << "What is the speed of the current conveyor?" << std::endl;
    std::cin >> answer;
    digitalSensor.GetValue(answer);
    digitalSensor.SensorResult();
    return 0;
}