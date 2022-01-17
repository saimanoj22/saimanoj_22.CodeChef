#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, count = 0; 
	    cin >> n;
	    if(n > 100){
	        cout << "HUNGRY\n";
	    }
	    else{
	        for(int i = 1; i <= sqrt(n); i++){
	            if(n % i == 0){
	                count += 2;
	            }
	        }
	        if(count == 2){
	            cout << "COOKIES\n";
	        }
	        else{
	            cout << "HUNGRY\n";
	        }
	    }
	}
	return 0;
}
