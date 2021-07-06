#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
		int n, a, b;
		cin >> n >> a >> b;
		int time = 2 * (180 + n);
		cout << time - (a+b) << "\n";
	}
    return 0;
}