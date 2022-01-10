#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int number;
	cin >> number;
	vector<int> v;
	for(long long int i = 1; i <= sqrt(number); i++){
	    if(number % i == 0){
	        cout << i << " ";
	        v.push_back(number/i);
	    }
	}
	for(int i = v.size()-1; i >= 0; i--){
	    if(v[i] != sqrt(number)){
	        cout << v[i] << " ";
	    }
	}
	return 0;
}
