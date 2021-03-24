#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n-i; j++){
            cout << "  ";
        }
        for(int k = i; k <= 2*i-1; k++){
            cout << "* ";
        }
        for(int a = 0; a < i-1; a++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}