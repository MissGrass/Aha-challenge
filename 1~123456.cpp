//����1~123456֮������7�ı�����ĩβ��7�����ĺ��ǣ� 
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

