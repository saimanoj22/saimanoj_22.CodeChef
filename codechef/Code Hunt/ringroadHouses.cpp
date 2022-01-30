#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int n, m;
	cin >> n >> m;
	int arr[m];
	for(int i = 0; i < m; i++){
		cin >> arr[i];
	}
	int sum = arr[0]-1;
	for(int i = 1; i < m; i++){
		if(arr[i] < arr[i-1]){
			sum += ((n - arr[i-1]) + (arr[i]));
		}
		else{
			sum += (arr[i]-arr[i-1]);
		}
		//cout << arr[i] << " " << sum << "\n";
	}
	cout << sum << "\n";
	return 0;
}