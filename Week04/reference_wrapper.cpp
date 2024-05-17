#include <iostream>
#include <functional>

void foo() {
	std::cout << " Inovoked" << std::endl;
}
int main()
{
	typedef void callableUnit();
	std::reference_wrapper<callableUnit> refWrap(foo);
	refWrap();
	return 0;
}