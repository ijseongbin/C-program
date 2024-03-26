#include<iostream>
#include<tuple>
int main()
{
	std::cout << std::boolalpha << std::endl;

	std::tuple<std::string, int, float> tuple1("first", 3, 4.167f);
	auto tuple2 = std::make_tuple("after", 4, 1.1);
	std::cout << "tuple1:" << std::get<0>(tuple1) << "," << std:: get<1>(tuple1) << ","
		<< std::get<2>(tuple1) << std::endl;
	std::cout << "tuple2:" << std::get<0>(tuple2) << "," << std::get<1>(tuple2) << ","
		<< std::get<2>(tuple2) << std::endl;
	std::cout << "tuple1 < tuple2 : " << (tuple1 < tuple2) << std::endl;
	return 0;
}