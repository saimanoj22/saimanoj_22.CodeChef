#include<stdio.h>
#include<string.h>

int main(){
	int num;
	scanf("%d", &num);
	while(num--){
        char str[11]; int flag = 0;
        scanf("%s", str);
        for(int i = 0; str[i] != '\0'; i++){
			if(str[i] == '3' || str[i] == '7'){
				flag++;
			}
        }
		if(flag == strlen(str)){
			printf("LUCKY\n"); 
		}
		else{
			printf("BETTER LUCK NEXT TIME\n");
		}
	}
	return 0;
}

