#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int arr[5], draw = 0, rahul = 0, ria = 0;
	    for(int i = 0; i < 5; i++){
	        cin >> arr[i];
	        if(arr[i] == 0)draw++;
	        else if(arr[i] == 1)rahul++;
	        else if(arr[i] == 2)ria++;
	    }
	    if(rahul == ria)cout << "DRAW\n";
	    else if(rahul > ria)cout << "RAHUL\n";
	    else if(ria > rahul)cout << "RIA\n";
	}
	return 0;
}
