#include <stdio.h>

int main() {
	int a,b;
	int sum_val = 0, cnt = 0;
    scanf("%d %d",&a,&b);
	for (int i = a; i <= b; i++) {
		if( i%5==0 || i%7==0){
			sum_val += i;
			cnt++;
		}
	}
	printf("%d %.1f", sum_val, (double)sum_val/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}