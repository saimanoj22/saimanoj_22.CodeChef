#include<stdio.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        float a, b, c, v, record, recordd, bolt = 9.58;
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        scanf("%f", &v);
        record = 100.0 / (a*b*c*v);
        recordd = (int)(record*100+0.5);
        //printf("%f   %f  ", record, (float)recordd/100);
        if(((float)recordd/100) < bolt){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}