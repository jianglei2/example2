#include<stdio.h>
int main() {
    int result;
    int valA,valB;
    printf("input variable A:\n");
    scanf("%d",&valA);
    printf("input variable B:\n");
    scanf("%d",&valB);
    result = valA + valB;
    printf("(%d + %d) = %d\n",valA,valB,result);
    return 0;
}
