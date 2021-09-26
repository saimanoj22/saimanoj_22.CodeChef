#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int n;
        cin >> n;
        if(n % 4 != 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            vector<int> v1, v2;
            int start = 1, end = n, flag = 0, check = n / 2;
            while(check){
                if(flag == 0){
                    v1.push_back(start);
                    start++;
                    flag = 1;
                }
                else{
                    v1.push_back(end);
                    end--;
                    flag = 0;
                }
                check--;
            }
            for(int i = start; i <= end; i++){
                v2.push_back(i);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            for(int i = 0; i < v1.size(); i++){
                cout << v1[i] << " ";
            }
            cout << "\n";
            for(int i = 0; i < v2.size(); i++){
                cout << v2[i] << " ";
            }
            cout << "\n";
        }
	}
	return 0;
}