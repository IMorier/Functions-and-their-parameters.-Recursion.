#include <iostream>

long int Fibonachi_number(int num);

int main() {

	int num{};
	std::cout << "Write your number: ";
	std::cin >> num;

	std::cout << "Fibonacci numbers: ";
	for (int i = 1; i < num; ++i) {
		std::cout << Fibonachi_number(i) << " ";
	}
	std::cout << Fibonachi_number(num) << std::endl;



	return 0;
}



long int Fibonachi_number(int num) {
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	if (num == 2) {
		return 1;
	}
	return Fibonachi_number(num - 2) + Fibonachi_number(num - 1);
}