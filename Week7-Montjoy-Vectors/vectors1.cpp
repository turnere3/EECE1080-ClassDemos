#include <iostream>
#include <vector>
#include <cstdlib>

const int ARRAY_MAX_SIZE = 500;
const int ARRAY_INITIAL_SIZE = 10;
using namespace std;


int main()
{
	vector<int> v_array(ARRAY_INITIAL_SIZE,10);

	cout << "Output using at() method" << endl;
	for(int i = 0; i  < v_array.size(); i++)
		cout << v_array.at(i) << endl;

	cout << "Output using standard array method" << endl;
	for(int i = 0; i < v_array.size(); i++)
		cout << v_array[i] << endl;

	cout << "Resize Array to 5 elements" << endl;
	v_array.resize(5);
	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "Add 6 new elements using random numberd" << endl;
	v_array.push_back(rand()%5);
	v_array.push_back(rand()%5);
	v_array.push_back(rand()%5);
	v_array.push_back(rand()%5);
	v_array.push_back(rand()%5);
	v_array.push_back(rand()%5);
	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "Remove the last 3 elements" << endl;
	for(int i = 0; i < 3; i++)
		v_array.pop_back();
	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "Clear Vector Contents" << endl;
	v_array.clear();
	if(!v_array.empty())
	{
		cout << "Array Still has Size?: " <<  v_array.size() << endl;
	}
	else
	{
		cout << "Array empty: Size: " <<  v_array.size() << endl;
	}

	cout << "Add five elements containing 0" << endl;
	v_array.resize(5);
	cout << "Resize array to 10 elements and setting new values to 100" << endl;
	v_array.resize(10, 100);
	cout << "Resize array to 14 elements and setting new values to 140" << endl;
	v_array.resize(14, 140);

	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "Erase all but the last 3 elements" << endl;
	v_array.erase(v_array.begin(), v_array.end()-3);
	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "Insert 10 new Elements  at end of array of value 7" << endl;
	v_array.insert(v_array.end(), 10, 7);
	for(vector<int>::iterator it = v_array.begin(); it != v_array.end(); it++)
	{
		cout << *it << endl;
	}
		
	return 0;
}


