#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n], count = 0;
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	    if(i > 0){
	        if((arr[i] + arr[i-1]) % 3 == 0)count++;
	    }
	}
	cout << count;
	return 0;
}
