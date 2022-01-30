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
		long long int n, k;
		cin >> n >> k;
		if(n == 1){
			cout << 1 << "\n";
		}
		else{
			if(k < 2 || k > n){
				cout << -1 << "\n";
			}
			else{
				for(int i = k; i <= n; i++)cout << i << " ";
				for(int i = 1; i <= k-1; i++)cout << i << " ";
				cout << "\n";
			}
		}
	}
	return 0;
}