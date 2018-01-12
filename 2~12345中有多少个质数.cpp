#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXSIZE 12345
using namespace std;
int main() {
	int num = 3, cnt = 1, i;
	while(num <= MAXSIZE) {
		for(i = 2; i <= sqrt(num); i++) {
			if(num % i == 0)
				break;
		}
		if(i > sqrt(num)) {
			cnt++;
		}
		num += 2;
	}
	printf("%d",cnt);
	return 0;
}

