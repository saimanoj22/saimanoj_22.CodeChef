#include<stdio.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int n, k;
        scanf(" %d", &n);
        scanf(" %d", &k);
        char str[n];
        for(int i = 0; i < n; i++){
            scanf(" %c", &str[i]);
        }
        int count = 0, max = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '*'){
                count++;
                if(max < count){
                    max  = count;
                }
            }
            else{
                count  = 0;
            }
        }
        if(max+1 >= k){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}