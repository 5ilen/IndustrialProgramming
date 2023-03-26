#include <iostream>
#include <string>
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

int main()
{
	Ocean ocean1("Тихий", "Северная Америка", 1000000, 1000, 10000000);
	Sea sea1("Черное", "Европа", 1000000, 1000, 10000000);
	Bay bay1("Балтийское", "Европа", 1000000, 1000, 10000000);

	std::cout << ocean1 << std::endl;
	std::cout << sea1 << std::endl;
	std::cout << bay1 << std::endl;
	return 0;
}