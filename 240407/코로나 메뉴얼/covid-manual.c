#include <stdio.h>

int main() {
    int tem1,tem2,tem3;
    char sym1,sym2,sym3;
    scanf("%c %d\n%c %d\n%c %d",&sym1,&tem1,&sym2,&tem2,&sym3,&tem3);
    if (tem1>=37 && sym1=='Y')
        if ((tem2>=37 && sym2=='Y') || (tem3>=37 && sym3=='Y'))
            printf("E");
        else
            printf("N");
    else
        if ((tem2>=37 && sym2=='Y') && (tem3>=37 && sym3=='Y'))
           printf("E");
        else
            printf("N");
    // 여기에 코드를 작성해주세요.
    return 0;
}