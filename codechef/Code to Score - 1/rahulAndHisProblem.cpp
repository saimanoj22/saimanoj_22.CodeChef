#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++)cin >> arr1[i];
    for(int i = 0; i < n; i++)cin >> arr2[i];
    int count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] == 1)count1++;
        if(arr2[i] == 1)count2++;
    }
    int zcount1 = n - count1;
    int zcount2 = n - count2;
    cout << min(count1, count2) + min(zcount2, zcount1);
	return 0;
}
