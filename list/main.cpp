#include <iostream>
#include <list>
using namespace std;

enum process{
	slink = 0,
	llink,
	kalink,
	shotmessage
};

process linkType;

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
	
	// - iterate over all elements
	list<char>::const_iterator pos;
	for (pos = coll.begin(); pos != coll.end(); pos++) {
		cout << *pos << ' ';
	}
	cout << endl;
	
	switch (linkType)
	{
		case slink:
			break;
		case llink:
			break;
		case kalink:
			break;
		case shotmessage:
			break;
	}
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}