#include <stdio.h>

int main() {
    int ma, ea, mb, eb;
    scanf("%d %d\n%d %d",&ma,&ea,&mb,&eb);
    if (ma>mb || (ma==mb && ea>eb))
        printf("A");
    else
        printf("B");
    // 여기에 코드를 작성해주세요.
    return 0;
}