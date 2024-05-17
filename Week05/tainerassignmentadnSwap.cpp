#include<set>

int main() {
	std::set<int> set1{ 0,1,2,3,4,5};
	std::set<int> set2{ 6,7,8,9 };
	for (auto s : set1) std::cout << s << "";
	std::count << "----------";
	for (auto s : set2) std::cout << s << "";

}