#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int x, y;
	    cin >> x >> y;
	    if(__gcd(x,y) > 1){
	        cout << "0" << "\n";
	    }
	    else{
	        if(x & 1){
	            x++;
	            if(__gcd(x,y) > 1){
	                cout << "1" << "\n";
	                continue;
	            }
    	        x--;
        	    y++;
        	    if(__gcd(x,y) > 1){
        	        cout << "1" << "\n";
        	        continue;
        	    }
        	    cout << "2" << "\n";
	        }
	        else{
	            cout << "1" << "\n";
	        }
	    }
	}
	return 0;
}
