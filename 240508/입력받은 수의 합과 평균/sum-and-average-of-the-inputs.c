#include <stdio.h>

int main() {
    int n, temp, cnt;
	int sum_val = 0;
    
    scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
        scanf("%d", &temp);
		sum_val += temp;
        cnt++;
	}
    printf("%d %.1f", sum_val, (double)sum_val/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}