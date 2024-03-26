#include<iostream>
#include<iostream>
int main()
{
	int a = 6;
	int b = 7;
	std::cout << "before swap : a = " << a << ", b = " << b << std::endl;
	std::swap(a, b);
	std::cout << "after swap : a = " << a << ", b = " << b << std::endl;
	return 0;
}