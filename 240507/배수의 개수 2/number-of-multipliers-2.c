#include <stdio.h>

int main() {
	int a, cnt = 0;
	for (int i = 1; i <= 10; i++) {
        scanf("%d" , &a);
		if (a % 2 == 1) {
			cnt++;
		}
	}

	printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}