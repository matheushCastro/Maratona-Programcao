#include <iostream>
using namespace std;

int mediaMediana(int a, int b) {
    int media = (a + b)/2;
    int c = media;

    return c;
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;
    if(a >= 1 && a <= b && b <= 109) {
		cout << mediaMediana(a, b);
	}
	else {
		return 0;
	}
    
    return 0;
}