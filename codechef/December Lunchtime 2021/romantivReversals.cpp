#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string temp = "";
        int start = 0, end = k-1;
        for(int i = 0; i < k; i++){
            if(i % 2 == 0){
                temp += s[start];
                start++;
            }
            else{
                temp += s[end];
                end--;
            }
        }
        reverse(temp.begin(), temp.end());
        string substring = s.substr(k, n- k);
        cout << temp + substring << "\n";
	}
	return 0;
}
