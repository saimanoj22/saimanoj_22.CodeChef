#include<stdio.h>

int main(){
    long long int testcases;
    scanf("%lld", &testcases);
    while(testcases--){
        long long int number, size, space, imdb, max = 0;
        scanf("%lld", &number);
        scanf("%lld", &size);
        for(int i = 0; i < number; i++){
            scanf(" %lld", &space);
            scanf(" %lld", &imdb);
            if(space <= size){
                if(max <= imdb){
                    max = imdb;
                }
            }
        }
        printf("%lld\n", max);
    }
    return 0;
}