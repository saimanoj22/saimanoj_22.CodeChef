#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int testcases;
	cin >> testcases;
	while(testcases--){
	    long long int n , k, count = 0, temp;
	    cin >> n >> k;
		temp = k;
	    long long int scores[n];
	    for(long long int i = 0; i < n; i++){
	        cin >> scores[i];
	    }
	    sort(scores, scores+n, greater<int>());
		if(scores[k-1] > scores[k]){
			cout << temp << "\n";
		}
		else{
			while(scores[k-1] == scores[k]){
				count++;
				k++;
			}
			cout << temp+count <<"\n";
		}
	}
	return 0;
}