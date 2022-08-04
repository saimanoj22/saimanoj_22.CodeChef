// Problem: Concat Sort
// Contest: CodeChef - July Long Two 2022 Division 2 (Unrated)
// URL: https://www.codechef.com/JULY222B/problems/CONCATSORT
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	ll testcases;
	cin >> testcases;
	while(testcases--){
        ll n;
        cin >> n;
        vector<ll> v(n , 0);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<ll> sv = v;
        sort(sv.begin(), sv.end());
        vector<ll> visited(n, 0);
        ll check = 0;
        vector<ll> first;
        for(ll i = 0; i < n; i++){
            if(v[i] == sv[check]){
                first.push_back(v[i]);
                visited[i] = 1;
                check++;
            }
        }
        vector<ll> rem;
        for(ll i = 0; i < visited.size(); i++){
            if(visited[i] == 0){
                rem.push_back(v[i]);
            }
        }
        ll flag = 0;
        for(ll i = 1; i < rem.size(); i++){
            if(rem[i] < rem[i - 1]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
        }
        else if(rem.size() > 0 && first.size() > 0 && rem[0] < first[first.size() - 1]){
            cout << "NO\n";
        }
        else cout << "YES\n";
  	}
	return 0;
}