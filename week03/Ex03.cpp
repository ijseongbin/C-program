#include<iostream>
#include<utility>
#include<vector>

struct MyData
{
	MyData() { std::cout << "NO arguments" << std::endl; };
	MyData(int, double, char) { std::cout << "With arutments" << std::endl; };
};

template <typename T, typename ... Args>T createT(Args&&... args) {
	return T(std::forward<Args>(args)...);
}
int main()
{
	int a = createT<int>();
	int b = createT<int>(6);
	std::string s = createT<std::string>("Only for gtesting purpose");
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "s = " << s << std::endl;
	MyData myData1 = createT<MyData>();
	MyData myData2 = createT<MyData>(1,3.14,'i');
	typedef std::vector<int> IntVec;
	IntVec intVec = createT<IntVec>(std::initializer_list<int>({ 1,2,3,4,5 }));
	return 0;
}