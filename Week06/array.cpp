#include <algorithm>
#include <numeric>
#include<array>
#include<iostream>
#include<iterator>

int main() {
	const int NUM = 10;

	std::array<int, NUM > arr1;
	std::cout << "arr1: ";
	std::copy(arr1.begin(), arr1.end(), std::ostream_iterator<int>(std::cout, " "));

	std::array<int, NUM> arr2 = {};
	std::cout << std::endl << "arr2: ";
	std::array<int, NUM>::const_iterator arrIt;
	for (arrIt = arr2.begin(); arrIt != arr2.end(); ++arrIt) std::cout << *arrIt << " ";

	std::array<int, NUM> arr3{ 1,2,3,4 };
	std::cout << std::endl << "arr3: ";
	for (auto a : arr3) std::cout << a << " ";

	std::array<int, NUM> arr4{ 1,2,3,4,5,6,7,8,9,10 };
	std::cout << std::endl << "arr4: ";
	std::copy(arr4.rbegin(), arr4.rend(), std::ostream_iterator<int>(std::cout, " "));

	double sum = std::accumulate(arr4.begin(), arr4.end(), 0);
	double mean = sum / arr4.size();
	std::cout << std::endl;
	std::cout << "mean of a4: " << mean << std::endl;

	std::cout << "arr4[5]: " << arr4[5] << std::endl;
	std::cout << "arr4.at[5]: " << arr4.at(5) << std::endl;
	arr4[5] = 2011;
	std::cout << "arr4[5]: " << arr4[5] << std::endl;

	std::swap(arr1, arr4);
	std::cout << std::endl << "arr4: ";
	for (auto a : arr4) std::cout << a << " ";

	std::cout << "(arr4[0] == std::get<0>(arr4)): " << (arr4[0] = std::get<0>(arr4)) << std::endl;

}
