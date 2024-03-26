#include<iostream>
#include<functional>
#include<map>

int main()
{
	std::map<const char, std::function<double(double, double) >> dispTable;
	dispTable.insert(std::make_pair('+', [](double a, double b) {return a + b; }));
	dispTable.insert(std::make_pair('-', [](double a, double b) {return a - b; }));
	dispTable.insert(std::make_pair('*', [](double a, double b) {return a * b; }));
	dispTable.insert(std::make_pair('/', [](double a, double b) {return a / b; }));
	std::cout << "3.5 + 4.5 = " << dispTable['+'](3.5, 4.5) << std::endl;
	std::cout << "3.5 - 4.5 = " << dispTable['-'](3.5, 4.5) << std::endl;
	std::cout << "3.5 * 4.5 = " << dispTable['*'](3.5, 4.5) << std::endl;
	std::cout << "3.5 / 4.5 = " << dispTable['/'](3.5, 4.5) << std::endl;
	return 0;
}