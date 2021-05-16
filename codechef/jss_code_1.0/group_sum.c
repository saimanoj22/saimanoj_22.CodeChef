#include<stdio.h>

int main(){
    long long int testcases;
    scanf("%lld", &testcases);
    while(testcases--){
        long long int n;
        scanf("%lld", &n);
        long long int temp = n-1;
        long long int sum = (temp * (temp+1)) / 2;
        long long int rsum = 0;
        for(long long int i = 2*sum + 2, count = 0; count < n; count++, i = i+2 ){
            rsum = rsum + i;
        }
        printf("%lld\n", rsum);
    }
    return 0;
}
