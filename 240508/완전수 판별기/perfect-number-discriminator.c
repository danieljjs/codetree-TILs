#include <stdio.h>

int main() {
    int n;
	int sum_val = 0;
    
    scanf("%d", &n);
	for (int i = 1; i < n; i++) {
        if (n%i==0)
			sum_val += i;
	}

    if (sum_val == n)
        printf("P");
    else
        printf("N");
    // 여기에 코드를 작성해주세요.
    return 0;
}