#include<stdio.h>

int main(){
    long long int testcases, n;
    scanf("%lld", &testcases);
    while(testcases--){
        scanf("%lld", &n);
        int remainder = n % 4;
        long long int divisor = n / 4, sum1 = 0,sum2 = 0;
        if(divisor >= 1){
            sum1 = (divisor) * 44;
            sum2 = (4 - remainder) * 4;
        }
        int sum3;
        switch (remainder)
        {
        case 1:
            sum3 = 20;
            break;
        case 2:
            sum3 = 36;
            break;
        case 3:
            sum3 = 51;
            break;
        case 0:
            sum3 = 0;
            break;
        default:
            break;
        }
        long long int sum = sum1 + sum2 + sum3;
        //printf("%d %lld\n", remainder, divisor);
        //printf("%lld %lld %d\n", sum1, sum2, sum3);
        printf("%lld\n", sum);
    }
    return 0;
}