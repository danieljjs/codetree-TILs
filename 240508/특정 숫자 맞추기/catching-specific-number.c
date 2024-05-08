#include <stdio.h>

int main() {
    int n;

	while (1) {
		scanf("%d", &n);
		if (n == 25) {
            printf("Good");
			break;
		}
        if (n < 25){
            printf("Higher\n");
        }
        if (n >25){
            printf("Lower\n");
        }
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}