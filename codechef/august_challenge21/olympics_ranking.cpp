#include <iostream>
using namespace std;

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		int g1, s1, b1;
		int g2, s2, b2;
		cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
		if(g1+s1+b1 > g2+s2+b2){
			cout << 1 << "\n";
		}
		else{
			cout << 2 << "\n";
		}
	}
}
