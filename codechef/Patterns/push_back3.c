//123454321
//123454321
//123454321
//123454321
//123454321

#include<stdio.h>
int main(){
    int testcases, number;
    scanf("%d", &testcases);
    for(int i = 0; i < testcases; i++){
        scanf("%d", &number);
        for(int j = 1; j <=number; j++){
            for(int k = 1; k <=number; k++){
                printf("%d", k);
            }
            for(int l = number-1; l > 0; l--){
                printf("%d", l);
            }
            printf("\n");
        }
    }
    return 0;
}