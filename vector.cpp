#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main() {
	// documentation at:
	// http://www.cplusplus.com/reference/vector/vector/
	
	vector<int> numeri;

	numeri.push_back(5);
	numeri.push_back(6);
	numeri.push_back(7);
	numeri.insert(numeri.begin(), 4);

	cout << "N elem: " << numeri.size();
	cout << ", max elems: " << numeri.max_size();
	cout << ", capacity: " << numeri.capacity() << endl;

	cout << "Primo elemento: " << numeri.front() << endl;
	cout << "Terzo elemento: " << numeri.at(2) << endl;
	cout << "Ultimo elemento: " << numeri.back() << endl;
	cout << "È vuoto: " << numeri.empty() << endl;

	cout << "Itero sul vettore:" << endl;
	for (vector<int>::iterator elem = numeri.begin(); elem != numeri.end(); elem++)
		cout << *elem << endl;

	for(int i = 0 ; i < numeri.size() ; i++ )
	  cout << numeri[i] << endl;

	cout << "Faccio piazza pulita" << endl;
	numeri.clear();
	cout << "N elem: " << numeri.size();
	cout << ", max elems: " << numeri.max_size();
	cout << ", capacity: " << numeri.capacity() << endl;


	cout << "---------------" << endl;


	int n;
	ifstream input("input.txt");

	input >> n;

	vector< pair<int,int> > intervalli;
	for (int i=0; i<n; i++) {
		int x, y;
		input >> x >> y;
		intervalli.push_back(pair<int,int>(x, y));
		cout << intervalli[i].first << " " << intervalli[i].second << endl;
	}


	return 0;
}
