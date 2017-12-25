//请问1~123456之间所有7的倍数和末尾含7的数的和是？ 
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i <= 123456; i++) {	
		if (i % 10 == 7 || i % 7 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}

