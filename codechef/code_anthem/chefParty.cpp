#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int p, n;
    cin >> p >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        p += arr[i];
    }
    cout << p << "\n";
    
	return 0;
}
