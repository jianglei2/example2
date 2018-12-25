#include<stdio.h>
void exchange(int* pA,int *pB) {
     if(!pA || !pB) {
        return;
     }
     int tmp;
     tmp = *pA;
     *pA = *pB;
     *pB = tmp;
}
int main() {
    int a = 10;
    int b = 0;
    printf("before change a is %d,b is %d\n",a,b);
    exchange(&a,&b);
    printf("after change a is %d,b is %d",a,b);
    return 0;
}
