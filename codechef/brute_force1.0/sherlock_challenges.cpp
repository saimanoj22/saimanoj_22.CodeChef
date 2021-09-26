#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int testcases;
	cin >> testcases;
	while(testcases--){
		int n;
		cin >> n;
		char str[n], count[8] = {0,0,0,0,0,0,0,0};
		for(int i = 0; i < n; i++){
		    cin >> str[i];
			if(str[i] == 's') count[0]++;
			if(str[i] == 'h') count[1]++;
			if(str[i] == 'e') count[2]++;
			if(str[i] == 'r') count[3]++;
			if(str[i] == 'l') count[4]++;
			if(str[i] == 'o') count[5]++;
			if(str[i] == 'c') count[6]++;
			if(str[i] == 'k') count[7]++;
		}
		int min = 100000;
		for(int i = 0; i < 8; i++){
			if(min >= count[i]){
				min = count[i];
			}
		}
		cout << min << "\n";
	}
	return 0;
}
