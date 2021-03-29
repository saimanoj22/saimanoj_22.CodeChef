#include<stdio.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int number;
        scanf("%d", &number);
        long long int arr[number], sum = 0;
        for(int i = 0; i < number; i++){
            scanf("%lld", &arr[i]);
            sum = sum + arr[i];
        }                                     // NOT SCOMPLETED
        int count = 0;
        if(sum % 2 == 0){
            printf("0\n");
        }
        else{
            int temp, max, flag;
            for(int i = 0; i < number; i++){
                temp = sum;
                flag = (arr[i]/2) - 1;
                if(flag >= 0){
                    max = flag;
                }
                else{
                    max = 0;
                }
                temp = (temp - arr[i]) + max;
                if(temp % 2 == 0){
                    count++;
                    printf("%d\n", count);
                    break;
                }
                else{
                    count++;
                }
            }
        }
        
    }
    return 0;
}