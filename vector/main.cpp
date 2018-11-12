#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> coll;               // vector container for integer elements
	
	// append elements with value 1 to 6
	for (int i = 0; i < 7; ++i) {
		coll.push_back(i);
	}
	
	// print all elements followed by a space
	for (int j = 0; j < coll.size(); ++j) {
		cout << coll[j] << "  ";
	}
	cout << endl;
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}