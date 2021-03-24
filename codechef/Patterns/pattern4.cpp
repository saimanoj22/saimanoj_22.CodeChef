#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter number of rows: ";
    cin >> n;
    for(int i = 1, j = 0; i <= n; i++, j = 0){
        for(int k = 1; k <= n-i; k++){
            cout <<"  ";
        }
        while(j != 2*i-1){
            cout << "* ";
            j++;
        }
        cout << "\n";
    }    
    return 0;
}