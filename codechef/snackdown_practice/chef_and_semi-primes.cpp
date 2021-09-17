#include<iostream>
using namespace std;
 
int prime(int n){
	for(int i = 2; i < n; i++)
		if(n % i == 0)return 0;
	return 1;
}
 
 
int semi(int n){
	int count = 0;
	for(int i = 2; (count<2) && (i <= n); i++){
		if(prime(i)){
			if(n % i == 0){
				n/=i;
				count++;
			}
		}
	}
 
	if(n == 1 && count == 2)return 1;
	else return 0;
}
 
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int temp=0, n, ans1, ans2;
		cin>>n;
		for(int i = 2; i <= n; i++){
			ans1 = semi(i);
			ans2 = semi(n-i);
            if(ans1 == 1 && ans2 == 1){
                cout << "YES\n";
                temp = 1;
                break;
            }
		}
		if(!temp)cout << "NO\n";
	}
}