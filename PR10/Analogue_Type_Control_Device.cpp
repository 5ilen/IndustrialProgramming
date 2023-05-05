#include <iostream>
#include <string>
class ControlDevice {
private:
    int value;
public:
    void GetValue(int val) {
        value = val;
    }
    void SensorResult() {
        std::cout << "The sensor gives the value: " << value << std::endl << std::endl;
    }
};

int main() {
    ControlDevice controlDevice;
    std::string answer;
    std::cout << "Run conveyor? Y if Yes, N if No" << std::endl;
    std::cin >> answer;
    if (answer == "Y") {
        controlDevice.GetValue(1);
    }
    else {
        controlDevice.GetValue(0);
    }
    controlDevice.SensorResult();
    return 0;
}