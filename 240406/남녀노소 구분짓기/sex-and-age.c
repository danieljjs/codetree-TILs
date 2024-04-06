#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d\n%d",&gender,&age);
    if(gender==0)
        if(age>=19)
            printf("MAN");
        else
            printf("BOY");
    else
        if(age>=19)
            printf("WOMAN");
        else 
            printf("GIRL");
    // 여기에 코드를 작성해주세요.
    return 0;
}