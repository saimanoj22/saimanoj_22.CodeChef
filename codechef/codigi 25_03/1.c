// XOR of elements in matrix.....
#include<stdio.h> 

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        long long int rows, columns, k;
        scanf("%lld", &rows);
        scanf("%lld", &columns);
        scanf("%lld", &k);
        long long int matrix[rows][columns];
        long long int xor = 0;
        for(int i = 0; i < rows; i++){
            for(int j= 0; j < columns; j++){
                matrix[i][j] = k + i + j + 2;
                xor = xor ^ matrix[i][j];
            }
        }
        /*for(int i = 0; i < rows; i++){
            for(int j= 0; j < columns; j++){
                printf("%lld ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");*/
        /*for(int i = 0; i < rows; i++){
            for(int j= 0; j < columns; j++){
                xor = xor ^ matrix[i][j];
            }
        }*/
        printf("%lld\n", xor);
    }
    return 0;
}