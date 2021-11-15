#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
	    cin >> n;
	    int arr[n];
	    bool att = false;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	        if(arr[i] == 7)att = true;
	    }
	    if(att)cout << "PRESENT\n";
	    else cout << "ABSENT\n";
	}
	return 0;
}
