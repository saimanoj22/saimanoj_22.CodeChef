# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	ll testcases;
	cin >> testcases;
	while(testcases--){
		ll n;
		cin >> n;
		ll arr[n], max = 0, min = INT_MAX, maxflag = 0, minflag = 0;
		for(ll i = 0; i < n; i++){
			ll temp;
			cin >> temp;
			arr[i] = abs(temp);
			if(i % 2 == 0){
				if(min > arr[i]){
					min = arr[i];
					minflag = i;
				}
			}
			else{
				if(max < arr[i]){
					max = arr[i];
					maxflag = i;
				}
			}
		}
		ll sum1 = 0, sum2 = 0;
		for(ll i = 0; i < n - 1; i += 2){
			sum1 += abs(arr[i]) - abs(arr[i + 1]);
		}
		if(n % 2 != 0){
			sum1 += arr[n - 1];
		}
		swap(arr[maxflag], arr[minflag]);
		for(ll i = 0; i < n - 1; i += 2){
			sum2 += abs(arr[i]) - abs(arr[i + 1]);
		}
		if(n % 2 != 0){
			sum2 += abs(arr[n - 1]);
		}
		if(sum1 > sum2){
			cout << sum1 << "\n";
		}
		else{
			cout << sum2 << "\n";
		}
 	}

	return 0;
}