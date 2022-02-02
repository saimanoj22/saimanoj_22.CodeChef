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
		int a, b, c, x, y, z;
		cin >> a >> b >> c >> x >> y >> z;
		int chef = a + b + c;
		int total = x + y + z;
		int totalHalf = total / 2;
		if(x + b + c > totalHalf || a + y + c > totalHalf || a + b + z > totalHalf)cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}