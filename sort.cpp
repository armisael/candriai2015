#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


bool cmp_invertito(int a, int b) {
	return a > b;
}

bool cmp_pair_secondo_elemento(pair<int,int> a, pair<int,int> b) {
	return a.second < b.second;
}


int main() {
	// documentation at:
	// http://www.cplusplus.com/reference/algorithm/sort/

	ifstream input("input_n.txt");
	int n;

	input >> n;

	int numeri[n];
	for (int i=0; i<n; i++) {
		input >> numeri[i];
		cout << numeri[i] << " ";
	}
	cout << endl;

	sort(numeri, numeri+n);
	for (int i=0; i<n; i++)
		cout << numeri[i] << " ";
	cout << endl;

	sort(numeri, numeri+n, cmp_invertito);
	for (int i=0; i<n; i++)
		cout << numeri[i] << " ";
	cout << endl;

	cout << "---------------------" << endl;

	pair<int, int> intervalli[3];
	intervalli[0].first = 4; intervalli[0].second = 9;
	intervalli[1].first = 2; intervalli[1].second = 8;
	intervalli[2].first = 6; intervalli[2].second = 7;

	for (int i=0; i<3; i++)
		cout << "(" << intervalli[i].first << "," << intervalli[i].second << ") ";
	cout << endl;

	sort(intervalli, intervalli+3);
	for (int i=0; i<3; i++)
		cout << "(" << intervalli[i].first << "," << intervalli[i].second << ") ";
	cout << endl;

	sort(intervalli, intervalli+3, cmp_pair_secondo_elemento);
	for (int i=0; i<3; i++)
		cout << "(" << intervalli[i].first << "," << intervalli[i].second << ") ";
	cout << endl;

}