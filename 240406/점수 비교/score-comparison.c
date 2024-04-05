#include <stdio.h>

int main() {
    int ma, ea, mb, eb;
    scanf("%d %d\n%d %d",&ma,&ea,&mb,&eb);
    if(ma>mb && ea>eb)
        printf("1");
    else
        printf("0");
    // 여기에 코드를 작성해주세요.
    return 0;
}