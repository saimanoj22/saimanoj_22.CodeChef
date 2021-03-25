#include<stdio.h>

int main(){
    int tetscases;
    scanf("%d", &tetscases);
    while(tetscases--){
        long long int rows, columns;
        scanf("%lld", &rows);
        scanf("%lld", &columns);
        long long int matrix[rows][columns];
        for(long long int i = 0; i < rows; i++){
            for(long long int j = 0; j < columns; j++){
                scanf("%lld", &matrix[i][j]);
            }
        }
        /*for(long long int i = 0; i < rows; i++){
            for(long long int j = 0; j < columns; j++){
                printf("%lld ", matrix[i][j]);
            }
            printf("\n");
        }*/
        int queries;
        scanf("%d", &queries);
        char qtype;
        for(int i = 0; i < queries; i++){
            scanf(" %c", &qtype);
            if(qtype == 'a'){
                long long int qrow, qcolumn, qvalue;
                scanf("%lld", &qrow);
                scanf("%lld", &qcolumn);
                scanf("%lld", &qvalue);
                matrix[qrow-1][qcolumn-1] = qvalue;
            }
            if(qtype == 'b'){
                long long int x1, y1, x2, y2;
                scanf("%lld", &x1);
                scanf("%lld", &y1);
                scanf("%lld", &x2);
                scanf("%lld", &y2);
                long long int sum = 0;
                /*printf("\n\n");
                for(long long int i = (x1-1); i < (x2); i++){
                    for(long long int j = (y1-1); j < (y2); j++){
                        printf("%lld", matrix[i][j]);
                    }
                    printf("\n");
                }
                printf("\n\n");*/
                for(long long int i = (x1-1); i < (x2); i++){
                    for(long long int j = (y1-1); j < (y2); j++){
                        sum = sum + matrix[i][j];
                    }
                }
                printf("%lld\n", sum);
            }
            //continue;
        }
    }
    return 0;
}