#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	sort(arr, arr+n);
	if(n == 1){
	    cout << -1;
	}
	else{
	    cout << arr[n-2];
	}
	return 0;
}
