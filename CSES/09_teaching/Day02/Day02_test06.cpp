#include "bits/stdc++.h"
#define ll long long int

using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	int mod = (int)1e9;
	
	ll res = 1;
	for(int i = 1; i <= n; i++){
		res = res * 1LL * i;		
		res %= mod;
	}
	if(res == 0) cout << "000000000";
	else {
		cout << res;
	}
	
	return 0;
}