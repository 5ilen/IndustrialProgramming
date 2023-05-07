#include <iostream>

class Container {
private:
    int currentCount;
    bool *sensorPtr; // указатель на датчик наполнения контейнера
    bool *lidDrivePtr; // указатель на привод крышки контейнера
public:
    Container(int initialCount, bool *sensor, bool *lidDrive) {
        currentCount = initialCount;
        sensorPtr = sensor;
        lidDrivePtr = lidDrive;
    }
    int getCurrentCount() {
        return currentCount;
    }
    void incrementCount() {
        currentCount++;
        if (sensorPtr != nullptr && *sensorPtr == true) {
            // если датчик наполнения активен, выполняем необходимые действия
            std::cout << "Container is full!" << std::endl;
            *lidDrivePtr = true; // открываем крышку контейнера
        }
    }
    void decrementCount() {
        currentCount--;
    }
};

int main() {
    bool sensor = true;
    bool lidDrive = false;
    Container container(0, &sensor, &lidDrive);

    container.incrementCount();
    container.incrementCount();
    container.incrementCount();

    std::cout << "Current count: " << container.getCurrentCount() << std::endl;

    container.decrementCount();

    std::cout << "Current count: " << container.getCurrentCount() << std::endl;

    return 0;
}