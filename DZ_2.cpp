#include <iostream>

void toPower(int, int);

int main() {

	int value{ 5 }, power{ 2 };

	toPower(value, power);

	value = 3; power = 3;

	toPower(value, power);

	value = 4; power = 4;

	toPower(value, power);

	return 0;
}




void toPower(int value, int power) {
	int result = 1;
	for (int i = 0; i < power; ++i) {
		result *= value;
	}


	std::cout << value << " to the power of " << power << " = " << result << std::endl;
}