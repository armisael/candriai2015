#include <fstream>
#include <iostream>

#define MAXN 1000
using namespace std;


int main() {
	// documentation at:
	// http://www.cplusplus.com/reference/utility/pair/

	pair<string, double> coppia("PI", 3.141592);
	cout << coppia.first << ": " << coppia.second << endl;

	int n;
	ifstream input("input.txt");

	input >> n;

	pair<int,int> intervalli[MAXN];
	for (int i=0; i<n; i++) {
		input >> intervalli[i].first >> intervalli[i].second;
		cout << intervalli[i].first << " " << intervalli[i].second << endl;
	}

	pair<int,int> intervallo = make_pair(1, 2);

	// in C++ 11:
	// cout << "Swap" << endl;
	// intervalli[0].swap();
	// cout << intervalli[0].get(0) << " " << intervalli[0].get(1);

	return 0;
}