#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int k, flag = 0;
        cin >> k;
        char str[101];
        for(int i = 0; i < k; i++){
            int first = 0, second = 0;
            scanf("%s", str);
            for(int j = 0; str[j] != '\0'; j++){
                if(str[j] >= 'a' && str[j] <= 'm') first++;
                if(str[j] >= 'N' && str[j] <= 'Z') second++;
            }
            if(first == strlen(str) || second == strlen(str)) flag++;
        }
        if(flag == k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}