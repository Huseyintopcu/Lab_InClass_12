#include "hashMapTable.h"
hashMapTable::hashMapTable()
{
	item = new hasTableEntry[table_size];
}

int hashMapTable::hashfunc(int key)
{
    return key % table_size;
}

void hashMapTable::insert(int key, int value)
{
	item[hashfunc(key)].value = value;
	item[hashfunc(key)].key = key;
}

int hashMapTable::SearchKey(int key)
{
	return item[hashfunc(key)].value;
	
}

void hashMapTable::Remove(int key)
{
	item[hashfunc(key)].key =NULL;
	item[hashfunc(key)].value =NULL;
}
