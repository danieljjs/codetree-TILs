#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
	scanf("%d", &n);

	bool satisfied = false;
	for (int i = 2; i <= n-1; i++) {
		if (n % i == 0) {
			satisfied = true;
		}
	}
	if (satisfied == true) {
		printf("C");
	}
	else {
		printf("N");
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}