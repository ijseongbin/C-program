#include <functional>
#include <iostream>

void invokeMe(const std::reference_wrapper<const std::string>& s) {
    std::cout << s.get() << ": const " << std::endl;
}

template <typename T>
void doubleMe(T&& t) {
    t *= 2;
}

int main() {
    std::string s{ "string" };
    invokeMe(std::cref(s));

    int i = 1;
    std::cout << "i : " << i << std::endl;
    doubleMe(i);
    std::cout << "doubleMe(i): " << i << std::endl;
    doubleMe(std::ref(i));
    std::cout << "doubleMe(ref(i)): " << i << std::endl;
    int a{ 2011 };
    auto tup = std::make_pair(a, std::ref(a));
    std::cout << "(tup.first, tup.second): ( " << tup.first << "," << tup.second << ")" << std::endl;
    a = 2014;
    std::cout << "(tup.first, tup.second): ( " << tup.first << "," << tup.second << ")" << std::endl;

    return 0;
}