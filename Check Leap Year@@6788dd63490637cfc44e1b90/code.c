#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%4!=0&&a%100==0){
        printf("Not a Leap Year");
    }
    if(a%4==0&a%400){
        printf("Leap Year");
    }
    return 0;
}