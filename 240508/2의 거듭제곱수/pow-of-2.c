#include <stdio.h>

int main() {
    int n;
    int prod = 1;
    int x = 0;
	scanf("%d", &n);

	while (1) {
		if (n == prod)
			break;
        prod*=2;
        x++;
	}
	printf("%d", x);
    // 여기에 코드를 작성해주세요.
    return 0;
}