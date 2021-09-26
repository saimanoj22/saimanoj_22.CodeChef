#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
    int arr[testcases];
    int max = 0, count  = 0;
    for(int i = 0; i < testcases; i++){
        cin >> arr[i];
        if(arr[i] > max){
            count++;
            max = arr[i];
        }
    }
    cout << count << "\n";
	return 0;
}
