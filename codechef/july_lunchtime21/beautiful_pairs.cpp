#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testcases;
	cin >> testcases;
	while(testcases--){
		long long int n, count = 0;
		cin >> n;
		int arr[n];
		for(long long int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(long long int i = 0; i < n; i++){
			for(long long int j = 0; j < n; j++){
				if(i != j){
					double nume = arr[i] - arr[j];
					double left = nume / arr[i];
					double right  = nume / arr[j];
					if(left < right) count++;
				}
			}
		}
		cout << count << "\n";
	}
    return 0;
}