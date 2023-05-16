#include <iostream>
#include <vector>

class Sensor {
  private:
    int id;
  public:
    Sensor(int id) {
      this->id = id;
    }
    int getId() {
      return id;
    }
};

class ControlDevice {
  private:
    int id;
  public:
    ControlDevice(int id) {
      this->id = id;
    }
    int getId() {
      return id;
    }
};

class Controller {
  private:
    std::vector<Sensor*> sensors;
    std::vector<ControlDevice*> controlDevices;
  public:
    void connectSensor(Sensor *sensor) {
      sensors.push_back(sensor);
    }
    void connectControlDevice(ControlDevice *controlDevice) {
      controlDevices.push_back(controlDevice);
    }
    void printConnectedSensorsAndControlDevices() {
      std::cout << "Connected sensors:" << std::endl;
      for (auto sensor : sensors) {
        std::cout << "Sensor " << sensor->getId() << std::endl;
      }
      std::cout << "Connected control devices:" << std::endl;
      for (auto controlDevice : controlDevices) {
        std::cout << "Control device " << controlDevice->getId() << std::endl;
      }
    }
    void readInputSequence(std::vector<int> &inputSequence) {
      int input;
      while (std::cin >> input) {
        inputSequence.push_back(input);
      }
    }
};

int main() {
  Sensor *sensor1 = new Sensor(1);
  Sensor *sensor2 = new Sensor(2);
  ControlDevice *controlDevice1 = new ControlDevice(1);
  ControlDevice *controlDevice2 = new ControlDevice(2);

  Controller controller;
  controller.connectSensor(sensor1);
  controller.connectSensor(sensor2);
  controller.connectControlDevice(controlDevice1);
  controller.connectControlDevice(controlDevice2);
  controller.printConnectedSensorsAndControlDevices();

  std::vector<int> inputSequence;
  std::cout << "Enter input sequence:" << std::endl;
  controller.readInputSequence(inputSequence);
  std::cout << "Input sequence:" << std::endl;
  for (auto input : inputSequence) {
    std::cout << input << " ";
  }
  std::cout << std::endl;

  return 0;
}