// printf j          printf k
//11111              12345
//22222              12345
//33333              12345
//44444              12345
//55555              12345

#include<stdio.h>
int main(){
    int testcases, number;
    scanf("%d", &testcases);
    for (int  i = 0; i < testcases; i++){
        scanf("%d", &number);
        for(int j = 1; j <= number; j++){
            for (int k = 1; k <= number; k++){
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}