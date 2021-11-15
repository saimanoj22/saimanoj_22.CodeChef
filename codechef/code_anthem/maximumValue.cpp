#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n , q;
	    cin >> n >> q;
	    int arr[n];
	    for(int i = 0; i < n; i++)cin >> arr[i];
	    for(int i = 0; i < q; i++){
	        int left, right, count = 0;
	        cin >> left >> right;
	        for(int j = 0; j < n; j++){
	            if(arr[j] >= left && arr[j] <= right)count++;
	        }
	        cout << 10 * count - (right - left) << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
