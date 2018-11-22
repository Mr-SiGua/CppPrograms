#include <iostream>
#include <unordered_set>

int main() {
	std::unordered_set<int> coll;
	
	coll.insert({1, 3, 7, 11, 13, 17, 19, 23, 27, 1});
	
	for (auto elem : coll) {
		std::cout << elem << " ";
	}
	
	std::cout << std::endl;
	
	coll.insert(25);
	
	for (auto elem : coll) {
		std::cout << elem << " ";
	}
	
	std::cout << std::endl;
	
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}