#include <iostream>
#include <stack>
using namespace std;


int main() {
	// documentation at:
	// http://www.cplusplus.com/reference/stack/stack/
	stack<int> numeri;

	numeri.push(5);
	numeri.push(6);
	numeri.push(7);
	numeri.push(8);

	cout << "N elem: " << numeri.size() << endl;
	cout << "Cima: " << numeri.top() << endl;
	cout << "È vuota: " << numeri.empty() << endl;

	while (!numeri.empty()) {
		cout << numeri.top() << endl;
		numeri.pop();
	}

}