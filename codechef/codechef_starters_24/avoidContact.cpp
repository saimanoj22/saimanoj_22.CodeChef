#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int testcases;
	cin >> testcases;
	while(testcases--){
		int x, y;
		cin >> x >> y;
		int rem = x - y;
		int temp = 2*y;
		if(x == y)cout << temp + rem - 1 << "\n";
		else cout << temp + rem << "\n";
	}

	return 0;
}