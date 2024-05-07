#include <stdio.h>

int main() {
    int n;
	int sum_val = 0;
    
    scanf("%d", &n);
	for (int i = n; i <= 100; i++) {
			sum_val += i;
	}
	printf("%d", sum_val);
    // 여기에 코드를 작성해주세요.
    return 0;
}