//1
//23
//456
//78910
//1112131415

#include<stdio.h>
int main(){
    int testcases, number;
    scanf("%d" , &testcases);
    for(int i = 0; i < testcases; i++){
        scanf("%d", &number);
    int count = 1;
        for(int j = 1; j <= number; j++){
            for(int k = 1; k <= j;k++){
                printf("%d", count);
                count++;
            }
            printf("\n");
        }
    }
    return 0;
}