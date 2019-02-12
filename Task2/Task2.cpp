#include <iostream> 
#include <iterator> 
#include <list> 
#include <algorithm> 

const int Count = 54;
const int Period = 8;

using namespace std;

void  Find_Number(list<int>& list)
{
	auto iterator = list.begin();
	int k;
	if (list.size() > 1 )
	{
		for (int i = 1; i < Period; i++)
		{
			list.push_back(*iterator);
			list.pop_front();
			iterator = list.begin();
		}
		list.pop_front();
		Find_Number(list);
	}	
}

int main()
{
	list<int> list_int;
	for (int i = 1; i <= Count; ++i)
		list_int.push_back(i);
	Find_Number(list_int);
	cout << "Answer : ";
	cout << list_int.front() << endl;
	system("pause");
	return 0;

}