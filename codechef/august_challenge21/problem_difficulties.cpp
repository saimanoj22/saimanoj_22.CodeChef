#include <bits/stdc++.h>
using namespace std;

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
        int problem[4];
        for(int i= 0; i < 4; i++){
            cin >> problem[i];
        }
        sort(problem, problem+4);
		if(problem[0]==problem[1] && problem[0]==problem[2] && problem[0]==problem[3] && problem[1]==problem[2] && problem[1]==problem[3] && problem[2]==problem[3]){
			cout << 0 << "\n";
		}
		else if((problem[0]==problem[1] && problem[1]==problem[2]) || (problem[1]==problem[2] && problem[2]==problem[3])){
			cout << 1 << "\n";
		}
		else{
			cout << 2 << "\n";
		}
	}
	return 0;
}