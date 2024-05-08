#include <stdio.h>

int main() {
    int n;
    int sum =0, cnt =0;

	while (1) {
		scanf("%d", &n);
		if (n / 10 == 2) {
            sum += n;
            cnt ++;
		}
        else{
            printf("%.2f", (double)sum/cnt);
            break;
        }
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}