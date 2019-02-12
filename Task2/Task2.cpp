#include <iostream> 
#include <iterator> 
#include <list> 
#include <algorithm> 

const int Count = 54;
const int Period = 8;

using namespace std;

void  FindNumber(list<int>& list)
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
		FindNumber(list);
	}	
}

int main()
{
	list<int> ListInt;
	for (int i = 1; i <= Count; ++i)
		ListInt.push_back(i);
	FindNumber(ListInt);
	cout << "Answer : ";
	cout << ListInt.front() << endl;
	system("pause");
	return 0;

}