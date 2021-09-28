#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    string s;
	    cin >> s;
	    long long int arr[7] = {0}, min = INT_MAX;
	    for(int i = 0; i < s.length(); i++){
	        if(s[i] == 'M')arr[0]++;
	        if(s[i] == 'S')arr[1]++;
	        if(s[i] == 'D')arr[2]++;
	        if(s[i] == 'H')arr[3]++;
	        if(s[i] == 'O')arr[4]++;
	        if(s[i] == 'N')arr[5]++;
	        if(s[i] == 'I')arr[6]++;
	    }
	    for(int i = 0; i < 7; i++){
	        if(min > arr[i])min = arr[i];
	    }
	    cout << min << "\n";
	}
	return 0;
}
