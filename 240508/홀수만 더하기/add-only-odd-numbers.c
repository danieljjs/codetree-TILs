#include <stdio.h>

int main() {
    int n,temp;
	int sum_val = 0;
    
    scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
        scanf("%d",&temp);
        if (i%2==0 || i%3==0)
			sum_val += i;
	}
	printf("%d", sum_val);
    // 여기에 코드를 작성해주세요.
    return 0;
}