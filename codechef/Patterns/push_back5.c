/*          1
            22
            333
            11
            2

            1
            12
            123
            12
            1    */

#include<stdio.h>
int main(){
    int testcases, number;
    scanf("%d", &testcases);
    for(int i = 1; i <= testcases; i++){
        scanf("%d", &number);
        char ch = 'A';
        for(int j = 1; j <=number/2+1; j++){
            for(int k = 1; k <=j; k++){
                printf("%d",k);
            }
            printf("\n");
        }
        for(int j=1; j<=(number/2+1)-1; j++){
                for(int l = 1; l<=(number/2+1)-j; l++){
                    printf("%d",l);
                }
                printf("\n");
        }
    }
    return 0;
}