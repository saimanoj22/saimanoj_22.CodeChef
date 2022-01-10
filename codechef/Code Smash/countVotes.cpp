#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int x, y, z, xa, ya, za;
	    cin >> x >> y >> z;
	    if(x > y && x > z)xa = 0;
	    else{
	        xa = max(y,z) - x + 1;
	    }
	    if(y > x && y > z)ya = 0;
	    else{
	        ya = max(x,z) - y + 1;
	    }
	    if(z > x && z > y)za = 0;
	    else{
	        za = max(y,x) - z + 1;
	    }
	    cout << xa << " " << ya << " " << za << "\n";
	}
	return 0;
}
