#include <stdio.h>
int main(){
    int N, char c;
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        c='*'*i;
        printf("%c\n",c);
    }return 0;
}