#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int p, a, b, c, x, y, temp, temp2;
	    cin >> p >> a >> b >> c >> x >> y;
	    temp = b + (a*x);
	    temp2 = c + (a*y);
	    cout << p / min(temp,temp2) << "\n";
	}
	return 0;
}
