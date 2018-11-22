#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> coll = {2, 5, 4, 1, 6, 3};
	
	auto minpos = min_element(coll.cbegin(), coll.cend());
	cout << "min: " << *minpos << endl;
	auto maxpos = max_element(coll.cbegin(), coll.cend());
	cout << "Max: " << *maxpos << endl;
	
	// sort all elements
	sort(coll.begin(), coll.end());
	
	// find the first element with value 3
	// -no cbegin()/cend() because latter we modify the elements pos3 refers to
	auto pos3 = find(coll.begin(), coll.end(),  // range
			3);                                 // value
	
	// reverse the order of the found element with value 3 and all following elements
	reverse(pos3, coll.end());
	
	// print all element
	for (auto elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}