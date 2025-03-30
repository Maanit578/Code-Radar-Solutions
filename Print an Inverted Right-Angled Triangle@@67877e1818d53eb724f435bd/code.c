#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        printf("*\n"*i);
    }return 0;
}