#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int get_Count()
{
	int Count;
	cout << "Input count ";
	cin >> Count;
	return Count;
}

void Print(string element)
{
	cout << element << endl;
}

void Fill_Vector(vector<string>& v)
{
	string str;
	cout << "Imput strings ";
	for (int i = 0; i < v.size(); i++)
	{
		cin >> str;
		v[i] = str;
	}
}

void Show_Vector(vector<string>& v)
{
	cout << "Vector : ";
	for (auto iterator = v.cbegin(); iterator != v.cend(); ++iterator)
		cout << *iterator << endl;
}

list<string>  Copy_Vector_To_List(vector<string>& v)
{
	list<string> list;
	for (int i = 0; i < v.size(); ++i)
		list.push_back(v[i]);
	return list;
}

void Show_Reverse_List(list<string> list)
{
	for (auto iterator = list.crbegin(); iterator != list.crend(); ++iterator)
		cout << *iterator << endl;
}

void Show_List(list<string> list)
{
	cout << "List : ";
	for_each(list.cbegin(), list.cend(), Print);
}

list<string> Delete_With_Digit(list<string> list)
{
	list.remove_if([](const auto& i) { return (isdigit(i[0])); });
	return list;
}


int main()
{
	int Count = get_Count();
	vector<string> vector_string(Count);
	Fill_Vector(vector_string);
	Show_Vector(vector_string);
	list<string> list_string = Copy_Vector_To_List(vector_string);
	list_string.sort();
	list_string = Delete_With_Digit(list_string);
	Show_List(list_string);
	system("pause");
}