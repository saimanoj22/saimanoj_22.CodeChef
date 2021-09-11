#include <bits/stdc++.h>
using namespace std;

int main(){
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int arr[3];
	    cin >> arr[0] >> arr[1] >> arr[2];
	    sort(arr, arr+3);
	    cout << arr[1] + arr[2] << "\n";
	}
	return 0;
}
