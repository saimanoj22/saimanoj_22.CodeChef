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
		int n, m, k;
		cin >> n >> m >> k;
		int ans = ((m - 1)*1) + ((n - 1)*m);
		if(k == ans)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}