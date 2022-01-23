#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int total, base, increase;
    cin >> total >> base >> increase;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int temp = base;
    for(int i = 0; i < n; i++){
        sum += temp + (arr[i]*0.01*temp);
    }
    if(sum <= total)cout << "YES";
    else cout << "NO";
	return 0;
}
