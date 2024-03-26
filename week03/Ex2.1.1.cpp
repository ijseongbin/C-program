#include<algorithm>
#include <iostream>
#include <string_view>
#include "Ex2.1.1.h"
int main()
{
	std::string first{ "first" };
	std::string second{ "second" };

	auto minInt = std::min({ 3,1,2011,2014,-5 });

	std::cout << " std::min(2011,2014): " << std::min(2011, 2014) << std::endl;
	std::cout << " std::min(first, second): " << std::min(first, second) << std::endl;
	std::cout << " std::min({3,1,2011,2014,-5}): " << std::min({ 3,1,2011,2014,-5 }) << std::endl;
	std::cout << "std::min(-10,-5,[](int a,int b){return std:;abs(a) < std::abs(b);}0: " << std::min(-10, -5 ,[](int a,int  b)); {return std::abs(a) < std::abs(b); }) << std::endl; 

}