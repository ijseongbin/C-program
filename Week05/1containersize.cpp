#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> intVec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::map<std::string, int> str2Int = { {"grimm", 12345}, {"인제대학교", 46574}, {"zetra", 7684}, {"Al소프트웨어", 4506}, {"김해", 57382} };
    std::unordered_map<std::string, int> str2Int2(str2Int.begin(), str2Int.end());
    std::set<double> douSet{ 3.14, 2.5 };

    for (auto v : intVec) std::cout << v << " ";
    std::cout << std::endl;
    for (auto m : str2Int) std::cout << m.first << ", " << m.second << " ";
    std::cout << std::endl;
    for (auto um : str2Int2) std::cout << um.first << ", " << um.second << " ";
    std::cout << std::endl;

    std::cout << "intVec.empty() : " << intVec.empty() << std::endl;
    std::cout << "str2Int.empty() : " << str2Int.empty() << std::endl;
    std::cout << "douSet.empty() : " << douSet.empty() << std::endl;

    std::cout << "intVec.size() : " << intVec.size() << std::endl;
    std::cout << "str2Int.size() : " << str2Int.size() << std::endl;
    std::cout << "douSet.size() : " << douSet.size() << std::endl;

    std::cout << "intVec.max_size() : " << intVec.max_size() << std::endl;
    std::cout << "str2Int.max_size() : " << str2Int.max_size() << std::endl;
    std::cout << "douSet.max_size() : " << douSet.max_size() << std::endl;

    return 0;
}