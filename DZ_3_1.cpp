#include <iostream>

void Fibonachi_number(int);

int main() {

	int num{};
	std::cout << "Write your number: ";
	std::cin >> num;

	Fibonachi_number(num);



	return 0;
}



void Fibonachi_number(int num) {
	if (num == 0 || num == 1) {
		std::cout << "0" << std::endl;
		return;
	}
	if (num == 2) {
		std::cout << "0 1" << std::endl;
		return;
	}
	unsigned long long variable_1{0}, variable_2{1}, variable{};
	std::cout << "Fibonacci numbers: " << variable_1 << " " << variable_2 << " ";
	for (int i = 2; i < num - 1; ++i){
		variable = variable_2;
		variable_2 = variable_1 + variable_2;
		variable_1 = variable;
		std::cout << variable_2 << " ";
	}
	std::cout << variable_2 + variable_1 << std::endl;
}