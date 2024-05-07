#include <stdio.h>

int main() {
    int prod = 1;
    int a,b;

    scanf("%d %d",&a,&b);
	for (int i = 1; i <= b; i++) {
		prod *= a;

	}
	printf("%d", prod);
    // 여기에 코드를 작성해주세요.
    return 0;
}