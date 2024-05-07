#include <stdio.h>

int main() {
    int temp;
	int sum_val = 0, cnt = 0;
	for (int i = 1; i <= 10; i++) {
        scanf("%d\n",&temp);
        if (temp>=0 && temp<=200){
			sum_val += temp;
            cnt++;
        }
	}
	printf("%d %.1f", sum_val, (double)sum_val/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}