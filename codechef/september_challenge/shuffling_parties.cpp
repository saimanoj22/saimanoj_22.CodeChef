#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
		int n, ecount = 0, ocount = 0;
		cin >> n;
		long long int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] % 2 == 0)ecount++;
			else ocount++;
		}
		int e = n / 2;
		int o = (n / 2) + (n % 2);
		cout << min(ecount, o) + min(ocount, e) << "\n";
	}
	return 0;
}