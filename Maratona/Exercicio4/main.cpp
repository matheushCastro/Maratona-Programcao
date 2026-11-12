#include <iostream>
using namespace std;

int main() {
	int t, l;
	
	cin >> t;
	if(t >= 1 && t <= 1000) {
		l = t * 2 * 2;
		
		cout << l;
	}
	else {
		return 0;
	}
	
	return 0;
}