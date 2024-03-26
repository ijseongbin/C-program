#include<iostream>
#include<tuple>
int main()
{
	int first = 1;
	int second = 2;
	int third = 3;
	int fourth = 4;
	std::cout << "global variables: " << first << " " << second << " " << third << " " << fourth << std::endl;
	auto tuple = std::tie(first, second, third, fourth) = std::make_tuple(1001, 1002, 1003, 1004);
	std::cout << "std::tuple tuple : (" << std::get<0>(tuple) << ", " << std::get<1>(tuple) << ", "
	<< std::get<2>(tuple) << ", " << std::get<3>(tuple) << ")" << std::endl;
	std::cout << "global variables: " << first << second << "" << third << " "<< fourth << std::endl;
	int a;
	int b;
	std::tie(std::ignore, a, std::ignore, b) = tuple;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::tie(a, b) = std::make_pair(3001, 3002);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	return 0;
}