#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int m, x, y ,z;
	    cin >> m >> x >> y >> z;
	    if(m <= x )cout << "CSE\n";
	    else if(m <= y)cout << "ECE\n";
	    else if(m <= z)cout << "Other Branch\n";
	    else cout << "Better luck next time\n";
	}
	return 0;
}
