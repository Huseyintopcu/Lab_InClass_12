#include<iostream>

#define table_size 200

using namespace std;

struct hasTableEntry
{
	int key, value;
};


class hashMapTable
{
	hasTableEntry *item;
public:
	hashMapTable();
	int hashfunc(int key);
	void insert(int key, int value);
	int SearchKey(int key);
	void Remove(int key);
	~hashMapTable() 
	{
		delete[] this->item;
	};
};

