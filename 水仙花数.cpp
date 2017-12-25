#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	for (int num = 100; num <= 999; num++) {
		int a = num / 100; 
		int b = num % 100 / 10;
		int c = num % 100 % 10;
		if ( num == a*a*a + b*b*b + c*c*c ) {
			cout << num << endl;
		}
	}

	return 0;
}

