#include<stdio.h>
long int jiecheng(int num) {
    if(num <= 1) {
      return 1;
    }
    long int result = 1;
    while(num > 1) {
      result *= num--;
    }
    return result;
}
int main() {
    int end;
    printf("input end num:\n");
    scanf("%d",&end);
    long int result;
    result = jiecheng(end);
    printf("%d jiecheng result is %ld\n",end,result);
    return 0;
}
