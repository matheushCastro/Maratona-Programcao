#include <iostream>
using namespace std;

int main() {
	int m, f1, f2, f3;
	
	cin >> m;
	cin >> f1;
	cin >> f2;
	
	if((m >= 40 && m <= 110) && (f1 >= 1 && f1 < m) && (f2 >= 1 && f2 < m) && (f1 != f2)) {
		f3 = m -(f1 + f2);
		cout << f3 << endl;
	}
	else {
		return 0;
	}
	
	if(f3 > f2 && f3 > f1) {
		cout << f3;
	}
	else if(f2 > f3 && f2 > f1) {
		cout << f2;
	}
	else if(f1 > f2 && f1 > f3) {
		cout << f3;
	}
	
	return 0;
}