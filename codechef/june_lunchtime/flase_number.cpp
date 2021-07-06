#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
    	string str, number;
        string attach = "1";
    	cin >> str;
    	int len = str.length();
    	if(str[0] == '1'){
    	    str[0] = '0';
            number = attach + str;
    	}
    	else{
    	   number = attach + str;
    	}
	    cout << number << endl;
    }
    return 0;
}