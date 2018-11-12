// 一个Array对象是一个Static Array或C array内管理元素。因此，不可以改变元素个数，只能改变元素值。且必须在声明时指定数组大小

#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
	// array container of 5 string elements
	array<string, 5> coll = {"hello", "world"};
	
	// print each element with its index on a line
	for (int i = 0; i < coll.size(); ++i) {
		cout << i << ": " << coll[i] << endl;
	}
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}

// 元素个数是array类型的一部分。因此array<int, 5> 和 array<int, 10>是两个不同的类型，不能进行比较。