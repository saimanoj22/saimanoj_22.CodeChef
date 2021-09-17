#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
	    cin >> n;
	    if(n % 2 == 1){
	        vector<vector<int>> grid(n, vector<int>(n,1));
	        int temp = 0;
	        for(int i = 0; i < n; i++){
	            grid[i][temp] = -1;
	            temp++;
	        }
	        for(int i = 0; i < n; i++){
	            for(int j = 0; j < n; j++){
	                cout << grid[i][j] << " ";
	            }
	            cout << "\n";
	        }
	    }
	    else{
	        vector<vector<int>> grid(n, vector<int>(n,-1));
	        for(int i = 0; i < n; i++){
	            for(int j = 0; j < n; j++){
	                cout << grid[i][j] << " ";
	            }
	            cout << "\n";
	        }
	    }
	}
	return 0;
}
