#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <string>
#include <algorithm>

const int Count = 3;

using namespace std;

void Print(string element)
{
	cout << element << endl;
}

void FillVector(vector<string>& v)
{
	string str;
	cout << "Imput strings ";
	for (int i = 0; i < v.size(); i++)
	{
		cin >> str;
		v[i] = str;
	}
}

void ShowVector(vector<string>& v)
{
	cout << "Vector : ";
	for (auto iterator = v.cbegin(); iterator != v.cend(); ++iterator)
		cout << *iterator << endl;
}

list<string>  CopyVectorToList(vector<string>& v)
{
	list<string> list;
	for (int i = 0; i < v.size(); ++i)
		list.push_back(v[i]);
	return list;
}

void ShowReverseList(list<string> list)
{
	for (auto iterator = list.crbegin(); iterator != list.crend(); ++iterator)
		cout << *iterator << endl;
}

void ShowList(list<string> list)
{
	cout << "List : ";
	for_each(list.cbegin(), list.cend(), Print);
}

list<string> DeleteWithDigit(list<string> list)
{
	list.remove_if([](const auto& i) { return (isdigit(i[0])); });
	return list;
}


int main()
{
	vector<string> VectorString(Count);
	FillVector(VectorString);
	ShowVector(VectorString);
	list<string> ListString = CopyVectorToList(VectorString);
	ListString.sort();
	ListString = DeleteWithDigit(ListString);
	ShowList(ListString);
	system("pause");
}