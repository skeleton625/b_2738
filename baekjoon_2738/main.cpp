#include <iostream>
using namespace std;

int a, b, i1;
int h1[100][100];

int main() {
	cin >> a >> b;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) cin >> h1[i][j];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) {
			cin >> i1;
			h1[i][j] += i1;
		}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) cout << h1[i][j] << " ";
		cout << endl;
	}
}