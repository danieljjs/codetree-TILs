#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if ((i % 2 == 0 && i % 4 !=0) || (i / 8) % 2 == 0  || i % 7 < 4) 
			continue;
        printf("%d ", i);
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}