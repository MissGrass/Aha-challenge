#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXSIZE 50
using namespace std;

int main() {
	int a[MAXSIZE];
	a[1] = 1;
	a[2] = 1;
	a[3] = 2;
	for(int i = 3 ; i <= MAXSIZE; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%d", a[45]);
	return 0;
}

