#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a, &b);

	for (int i = a; i <= b;) {
		if (i % 2 == 0) {
			printf("%d ",i);
            i+=3;
		}
		else {
			printf("%d ",i);
            i*=2;
		}
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}