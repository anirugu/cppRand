// cppRand.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vals{ 12,22,31,44 };
	auto begin = vals.begin();
	auto cbegin = vals.cbegin();
	vals.erase(begin);
}
