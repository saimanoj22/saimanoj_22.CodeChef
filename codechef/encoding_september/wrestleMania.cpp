#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int p;
	    cin >> p;
	    bool flag = true;
	    if(p == 0 || p == 1)flag = false;
	    else{
	        for(int i = 2; i <= p / 2; i++){
	            if(p % i == 0){
	                flag = false;
	                break;
	            }
	        }
	    }
	    if(flag)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
