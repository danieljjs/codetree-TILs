#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

	for (int i = a; i <= 100; i++) {
		if (a>=90) {
			printf("A ");
		}
        else if (a>=80) {
			printf("B ");
		}
        else if (a>=70) {
			printf("C ");
		}
        else if (a>=60) {
			printf("D ");
		}
		else {
			printf("F ");
		}
        a++;
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}