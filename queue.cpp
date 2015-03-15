#include <iostream>
#include <fstream>
#include <queue>
using namespace std;


int main() {
	// documentation at:
	// http://www.cplusplus.com/reference/queue/queue/
	queue<int> numeri;

	numeri.push(5);
	numeri.push(6);
	numeri.push(7);
	numeri.push(8);

	cout << "N elem: " << numeri.size() << endl;
	cout << "Primo elemento: " << numeri.front() << endl;
	cout << "Ultimo elemento: " << numeri.back() << endl;
	cout << "È vuota: " << numeri.empty() << endl;

	cout << "---------------" << endl;

	ifstream input("input_m.txt");
	int n;
	input >> n;
	bool mappa[n+2][n+2];

	for (int i=0; i<n+2; i++) {
		for (int j=0; j<n+2; j++) {
			if (i==0 || j==0 || i==n+1 || j==n+1)
				mappa[i][j] = false;
			else {
				char c;
				input >> c;
				mappa[i][j] = (c == '*');
			}
		}
	}

	queue< pair<int,int> > caselle;
	caselle.push(make_pair(1, 1));
	while(!caselle.empty()) {
		pair<int,int> casella = caselle.front();
		caselle.pop();

		cout << "Visito " << casella.first << " " << casella.second << endl;
		if (casella.first == n && casella.second == n)
			break;

		mappa[casella.first][casella.second] = false;
		for (int i=-1; i<=1; i++) {
			for (int j=-1; j<=1; j++) {
				int x = casella.first + i;
				int y = casella.second + j;
				if (mappa[x][y]) {
					caselle.push(make_pair(x, y));
					mappa[x][y] = false;
				}
			}
		}
	}

	return 0;
}