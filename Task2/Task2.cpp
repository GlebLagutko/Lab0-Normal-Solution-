#include <iostream> 
#include <iterator> 
#include <list> 
#include <algorithm> 

const int Count = 22;
const int Period = 5;

using namespace std;

int Find_Number(list<int>& list)
{
	if (list.begin != list.end - 1)
	{
		for_each(list.cbegin(), list.cend()  - 1 + Period, list.push_back());
		list.pop_front;
		Find_Number(list);
		
	}
}

int main()
{
	list<int> list_int;
	for (int i = 1; i <= Count; ++i)
		list_int.push_back(i);
	cout << Find_Number(list_int);
	system("pause");
	return 0;

}