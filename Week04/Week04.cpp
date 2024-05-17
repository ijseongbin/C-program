#include <iostream>
#include <functional>

void invokedMe(const std::string& s)
{

	std::cout << "output frome invokedMe : " << s << " : const " << std::endl;
}
template <typename T> void doubleMe(T t)
{
	std::cout << "doubleME called : t " << t << " : const " << std::endl;
	t *= 2;		std::cout << "doubleME finished : t " << t << " : const " << std::endl;
}
int main()
{
	std::string s{"string"};
	invokedMe(s);

	int i = 5;
	std::cout << "in main :  i = " << i << std::endl;
	doubleMe(i);
	std::cout << "in main after doubleMe(i) : i = " << i << std::endl;

	doubleMe(std::ref(i));
	std::cout << "in main after doubleMe(std::ref(i)): i = " << i << std::endl;
	
	int a{ 2024 };
	auto tup = std::make_pair(a, std::ref(a));
	std::cout << " tup.first = " << tup.first << ", tup.second  = " << tup.second << std::endl;

	a = 3034;
	std::cout << " tup.first = " << tup.first << ", tup.second  = " << tup.second << std::endl;
}
