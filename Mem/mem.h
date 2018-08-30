//
// Created by B250m-k on 2018/8/30.
//

#ifndef MEM_MEM_H
#define MEM_MEM_H
typedef unsigned char byte;

class Mem {
private:
	byte* mem;
	int size;
	void ensureMinSize(int minSize);

public:
	Mem();
	Mem(int sz);
	~Mem();
	int msize();
	byte* pointer();
	byte* pointer(int minSize);
};


#endif //MEM_MEM_H
