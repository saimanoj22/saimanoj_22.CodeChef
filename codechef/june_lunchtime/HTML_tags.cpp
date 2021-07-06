#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
    	string str;
        cin >> str;
        int check1 = 0, check2 = 0, check3 = 0, alpha = 0;
        if(str[0] == '<')check1 = 1;
        if(str[1] == '/')check2 = 1;
        int len = str.length();
        if(str[len-1] == '>')check3 = 1;
        for(int i = 2; i < len; i++){
            if(islower(str[i]))alpha++;
            else if(isdigit(str[i]))alpha++;
        }
        if(check1 == 1 && check2 == 1 && check3 == 1 && alpha == len-3 && alpha != 0) cout << "SUCCESS\n";
        else cout << "ERROR\n";
    }
    return 0;
}