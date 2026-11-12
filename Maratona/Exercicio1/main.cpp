#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	
	cin >> a;
	cin >> c;
	cin >> d;
	
	if(a < 0 || b < 0 || c < 0) {
		return 0;
	}
	else if(a > 100 || b > 100 || c > 100) {
		return 0;
	}
	else {
		if(a == c) {
			b = d;
			cout << b;
		}
		else if(a == d) {
			b = c;
			cout << b;
		}
		else {
			return 0;
		}
	}
	
	return 0;
}