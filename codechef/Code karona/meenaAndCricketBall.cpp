#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int testcases;
	cin >> testcases;
	while(testcases--){
		int x, n, b;
		cin >> x >> n >> b;
		int arr[n], sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		if(x - sum >= b){
			cout << n << "\n";
		}
		else{
			sort(arr, arr+n);
			int flag = 0;
			for(int i = n-1; i >= 0; i--){
				if(sum <= x - b)break;
				sum -= arr[i];
				flag = i;
			}
			cout << flag << "\n";
		}
	}
	return 0;
}