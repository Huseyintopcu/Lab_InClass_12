#include"hashMapTable.h"

int main()
{
	int opinion, key, value;
	hashMapTable mtable;
	do
	{
		cout << "1.Insert element into the table" << endl;
		cout << "2.Search element from the key" << endl;
		cout << "3.Delete element at table" << endl;
		cout << "4.Exit" << endl << endl;
		cout << "Enter your choice: ";
		cin >> opinion;
		cout << endl << endl;
		switch (opinion)
		{
		case 1:
		{
			cout << "Enter element to be inserted: ";
			cin >> value;
			cout << "Enter key at which element to be inserted: ";
			cin >> key;
			mtable.insert(key, value);
			cout << endl << endl;
			break;
		}
		case 2:
		{
			cout << "Enter key to search:";
			cin >> key;
			if (mtable.SearchKey(key)==NULL)
			{
				cout << "-----   !!! It is EMPTY !!!   -----" << endl << endl << endl;
			}
			else
				cout << "value of key:" << mtable.SearchKey(key) << endl << endl << endl;
			break;
		}
		case 3:
		{
			cout << "Enter key to delete:";
			cin >> key;
			mtable.Remove(key);
			cout << endl << endl;
			break;
		}
		case 4:
			break;
		default:
			cout << "-------   !!! YOU ENTERED OUT OF RANGE !!!   -------" << endl;
			break;
		}
	} while (opinion!=4);
}