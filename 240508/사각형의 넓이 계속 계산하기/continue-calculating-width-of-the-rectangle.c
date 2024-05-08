#include <stdio.h>

int main() {
    int a,b;
    char c;

	while (1) {
		scanf("%d %d %c", &a, &b, &c);
		if (c == 'C') {
            printf("%d",a*b);
			break;
		}
        else {
            printf("%d\n",a*b);
        }
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}