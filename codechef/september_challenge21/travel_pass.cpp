#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int testcases;
    cin >> testcases;
    while(testcases--){
		int n, a, b, sum = 0;
		cin >> n >> a >> b;
		char travel[n];
		cin >> travel;
		for(int i = 0; i < n; i++){
			if(travel[i] == '0')sum += a;
			else sum += b;
		}
		cout << sum << "\n";
    }
    return 0;
}