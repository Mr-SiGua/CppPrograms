#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> coll;                    // list container for character elements
	
	// append elements from 'a' to 'z'
	for (char c = 'a'; c <= 'z'; ++c) {
		coll.push_back(c);
	}
	
	// print all elements:
	// -use range-based for loop
	for (auto elem : coll) {
		cout << elem << ' ';
	}
	cout << endl;
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}