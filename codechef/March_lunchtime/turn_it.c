#include<stdio.h>
#include<math.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        long long int u, v, a, s, test;
        double velocity;
        scanf("%lld", &u);
        scanf("%lld", &v);
        scanf("%lld", &a);
        scanf("%lld", &s);
            test = (u*u) - (2*a*s);
            velocity = sqrt(test);
            if(velocity <= v){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    return 0;
}