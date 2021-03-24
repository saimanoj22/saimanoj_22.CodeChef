#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter number of rows: ";
    cin >> number;
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= number - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(int m = number-1; m >= 1; m--){
        for (int n = 0; n <= number-m-1; n++){
            cout << " ";
        }
        for(int p = 1; p <= m; p++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}