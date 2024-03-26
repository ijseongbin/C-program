
#include<iostream>
#include<utility>
#include<vector>
int main()
{
	std::vector<int> myBigVec(1000000, 2024);
	std::vector<int> myVec;
	std::vector<int> myVecMove;
	std::cout << "myBigVec = (" << myBigVec[0] << ", " << myBigVec[100] << ")" << std::endl;
	std::cout << "단순 대입" << std::endl;
	myVec = myBigVec;
	std::cout << "myVec = (" << myVec[0] << ", " << myVec[100] << ")" << std::endl;
	std::cout << "myBigVec = (" << myBigVec[0] << ", " << myBigVec[100] << ")" << std::endl;
	std::cout << "move 사용" << std::endl;
	myVecMove = std::move(myBigVec);
	std::cout << "myVecMove = (" << myVecMove[0] << ", " << myVecMove[100] << ")" << std::endl;
	std::cout << "myBigVec = (" << myBigVec[0] << ", " << myBigVec[100] << ")" << std::endl;
	return 0;
}