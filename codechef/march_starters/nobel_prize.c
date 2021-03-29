#include<stdio.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int researchers, topics, arr[researchers], temp = -1, count = 0;
        scanf("%d", &researchers);
        scanf("%d", &topics);
        for(int i = 0; i < researchers; i++){
            scanf("%d", &arr[i]);
            if(arr[i] != temp){
                count++;
            }
            temp = arr[i];
        }
        printf("%d", count);
        if(count == topics){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}