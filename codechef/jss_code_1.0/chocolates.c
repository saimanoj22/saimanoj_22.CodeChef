#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int x = n / 500;
    n = n - (x * 500);
    long long int y = n / 5;
    long long int sum = (x * 1000) + (y * 5);
    printf("%lld", sum);
    return 0;
}
