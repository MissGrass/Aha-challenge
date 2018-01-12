#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXSIZE 100 
using namespace std;
int main() {
	int num = 3, SUM = 2, i;
	while(num <= MAXSIZE) {
		for(i = 2; i <= sqrt(num); i++) {
			if(num % i == 0)
				break;
		}
		if(i > sqrt(num)) {
			SUM += num;
		}
		num += 2;
	}
	printf("%d",SUM);
	return 0;
}

