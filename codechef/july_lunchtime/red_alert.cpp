#include<bits/stdc++.h>
using namespace std;


int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		int n, d, h;
		cin >> n >> d >> h;
		long long int arr[n], sum = 0, flag = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] > 0){
				sum = sum + arr[i];
			}
			else{
				if(sum >= d){
					sum = sum - d;
				}
				else{
					sum = 0;
				}
			}
			if(sum > h){
				flag = 1;
			}
		}
		if(flag == 1) cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}