#include <stdio.h>

int gcd(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	
	if (a > b) {
		gcd(a % b, b);
	}
	else {
		gcd(a, b % a);
	}
}

int main() {
	int k = gcd(2, 7);
	printf(" chleo rhd = %d", k);

	return 0;
}