#include <stdio.h>

int main() {
    int n, cnt = 0;
	scanf("%d", &n);

	while (1) {
        if(n == 1)
            break;
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3 + 1;
		}
        cnt++;
	}
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}