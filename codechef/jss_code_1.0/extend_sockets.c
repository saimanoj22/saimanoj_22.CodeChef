#include<stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int flag = x, count = 0;
    while(x < y){
        x = (x-1) + flag;
        count++;
    }

    printf("%d\n", count+1);
    return 0;
}
