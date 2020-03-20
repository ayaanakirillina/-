//число квадратов в массиве
#include <iostream>
using namespace std;
int main() {
	int n, a[100], b[100], q = 0, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		b[i] = sqrt(a[i]);
	}
	for (i = 0; i < n; i++) {
		if (pow(b[i], 2) == a[i]) q++;
	}
	cout << q << endl; //количество
	system("pause");
}
