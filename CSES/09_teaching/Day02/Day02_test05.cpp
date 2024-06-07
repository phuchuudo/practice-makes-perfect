#include "bits/stdc++.h"
#define ll long long int

using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll y, a; cin >> y >> a;
	if(y <= 1){
		cout << 0; return 0;
	}
	
	int x = 1;
	while(true){
		ll res = 1;
		for(int i = 1; i <= x; i++){
			res *= a;
		}
		if(res >= y){
			cout << x; return 0;
		}
		x++;
	}
	
	return 0;
}