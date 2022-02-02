#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	long long int testcases;
	cin >> testcases;
	while(testcases--){
		long long int x, a, b;
		cin >> x >> a >> b;
		if(x == 1 && a == 1 && b == 1){
			cout << 1 << "\n";
		}
		else if(a > b && a != 1){
			if(x % a == 0){
				cout << (x/a)*b << "\n";
			}
			else cout << -1 << "\n";
		}
		else cout << -1 << "\n";
	}

	return 0;
}