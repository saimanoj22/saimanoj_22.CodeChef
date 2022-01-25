#include <bits/stdc++.h>
using namespace std;

bool isPerfect(long long int n){
    long long int sum = 1;
    for (long long int i = 2; i*i <= n; i++){
        if (n % i == 0){
            if(i*i != n)
                sum = sum + i + n/i;
            else
                sum = sum + i;
        }
    }
     if (sum == n && n != 1)
          return true;
  
     return false;
}

int main() {
    int n;
    cin >> n;
    long long int arr[n], count = 0;
    for(long long int i = 0; i < n; i++){
        cin >> arr[i];
        if(isPerfect(arr[i]))count++;
    }
    cout << count;
	return 0;
}
