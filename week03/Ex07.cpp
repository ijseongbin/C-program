#include<iostream>
#include<utility>

int main()
{
	std::pair<const char*, double> charDouble("circumferene ratio", 3.14);
	std::pair<const char*, double> charDouble2 = std::make_pair("circumference ratio", 3.14);
	auto charDouble3 = std::make_pair("circumferene ratio", 3.14);
	std::cout << "charDouble: (" << charDouble.first << ", " << charDouble.second << ")" << std::endl;
	charDouble.first = "First and Second are changed";
	std::get<1>(charDouble) = 4.56;
	std::cout << "charDouble: (" << charDouble.first << "," << charDouble.second << ")" << std::endl;
	return 0;
}