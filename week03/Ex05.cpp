#include<iostream>
#include<functional>
using namespace std::placeholders;

double divMe(double a, double b) {
	return double( a / b);
}

int main()
{
	std::cout << "1.0/2.0 = " << std::bind(divMe, 1, 2.0)() << std::endl;
	std::function<double(double, double)> divMePlaceholder = std::bind(divMe, _1, _2);
	std::function<double(double, double)> divMeSwap = std::bind(divMe, _2, _1);
	std::function<double(double)> divMeFirst = std::bind(divMe, _1, 2.0);
	std::function<double(double)> divMeSecond = std::bind(divMe, 1, _1);
	std::cout << "divMePlaceholder(1, 2.0) = " << divMePlaceholder(1, 2.0) << std::endl;
	std::cout << "divMeSwap(1, 2.0) = " << divMeSwap(1, 2.0) << std::endl;
	std::cout << "divMeFirst(1) = " << divMeFirst(1) << std::endl;
	std::cout << "divMeSecond(2.0) = " << divMeSecond(2.0) << std::endl;
	return 0;
}