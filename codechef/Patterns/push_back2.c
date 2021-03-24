// printf j          printf k
//1                  1
//22                 12
//333                123
//4444c              1234
//55555              12345

#include<stdio.h>
int main(){
    int testcases, number;
    scanf("%d", &testcases);
    for (int  i = 0; i < testcases; i++){
        scanf("%d", &number);
        for(int j = 1; j <= number; j++){
            for (int k = 1; k <= j; k++){
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}