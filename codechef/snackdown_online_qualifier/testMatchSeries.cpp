#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int arr[5];
	    int india = 0, england = 0 , draw = 0;
	    for(int i = 0; i < 5; i++){
	        cin >> arr[i];
	        if(arr[i] == 0)draw++;
	        if(arr[i] == 1)india++;
	        if(arr[i] == 2)england++;
	    }
	    if(india > england)cout << "INDIA\n";
	    else if(england > india)cout << "ENGLAND\n";
	    else cout << "DRAW\n";
	}
	return 0;
}
