#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n, count = 0;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >>arr[i];
	        if(arr[i] == 1)count++;
	    }
	    if(count >0 )cout << "HARD\n";
	    else cout << "EASY\n";
	}
	return 0;
}
