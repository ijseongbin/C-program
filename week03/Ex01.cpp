#include <iostream>
#include <algorithm>

int main()
{
	std::string first("first");
	std::string second("second");
	auto numbers = { 3, 1 , 2011, 2024, -5 };
	auto minlnt = std::min(numbers);
	std::cout << "min(first, second) = " << std::min(first, second) << std::endl;
	std::cout << "min(numbers) = " << minlint << std::endl;
	std::cout << "min(-10, -5, comp) = " <<
		std::min(-10, -5, [](int a, int b) {return std::abs(a) < std::abs(b); } << std::endl;
	return 0;
}