#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<float> coll;                  // deque container for float-point elements
	
	// insert elements from 1.1 to 6.6 each at the front
	for (int i = 1; i < 7; ++i) {
		coll.push_front(i * 1.1);       // insert at front
	}
	
	// print all elements followed by a space
	for (int j = 0; j < coll.size(); ++j) {
		cout << coll[j] << "  ";
	}
	cout << endl;
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}