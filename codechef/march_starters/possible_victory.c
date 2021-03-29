#include<stdio.h>

int main(){
    int teamone, overs, runs;
    scanf("%d", &teamone);
    scanf("%d", &overs);
    scanf("%d", &runs);
    if(((20-overs)*6)*6 > (teamone-runs)){
        printf("Yes");
    }
    else{
        printf("NO");
    }
    return 0;
}