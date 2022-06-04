// Problem: Bucket and Water Flow 
// Contest: CodeChef - May Lunchtime 2022 Division 2 (Rated)
// URL: https://www.codechef.com/LTIME108B/problems/WATERFLOW
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll w, x, y, z;
		cin >> w >> x >> y >> z;
		x -= w;
		ll temp = y * z;
		if(x == temp)cout << "filled\n";
		else if(temp < x)cout << "Unfilled\n";
		else cout << "overFlow\n";
  	}
	return 0;
}