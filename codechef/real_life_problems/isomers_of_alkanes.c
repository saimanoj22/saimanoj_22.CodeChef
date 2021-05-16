#include<stdio.h>

int main(){
	long long int testcases;
	scanf("%lld", &testcases);
	while(testcases--){
	    int n;
	    scanf("%d", &n);
	    if(n == 0) printf("0\n");
	    if(n == 1) printf("1\n");
	    if(n == 2) printf("1\n");
	    if(n == 3) printf("1\n");
	    if(n == 4) printf("2\n");
	    if(n == 5) printf("3\n");
	    if(n == 6) printf("5\n");
	    if(n == 7) printf("9\n");
	    if(n == 8) printf("18\n");
	    if(n == 9) printf("35\n");
	    if(n == 10) printf("75\n");
	    if(n == 11) printf("159\n");
	    if(n == 12) printf("355\n");
	    if(n == 13) printf("802\n");
	    if(n == 14) printf("1858\n");
	    if(n == 15) printf("4347\n");
	    if(n == 16) printf("10359\n");
	    if(n == 17) printf("24894\n");
	    if(n == 18) printf("60523\n");
	    if(n == 19) printf("148284\n");
	    if(n == 20) printf("366319\n");
	}
    return 0;
}