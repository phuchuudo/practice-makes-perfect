#include "bits/stdc++.h"
#define ll long long int

using namespace std;

ll pow(ll n, ll p){
	if(p == 0) return 1;
	if(p == 1) return n;
	ll tmp = pow(n, p / 2);
	if(p % 2) return n * pow(n, p - 1);
	return tmp * tmp;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x; cin >> x;
	int a0, a1, a2, a3, a4, a5;
	cin >> a0 >> a1 >> a2 >> a3 >> a4 >> a5;
	ll res = a0 * pow(x, 5) + a1 * pow(x, 4) + a2 * pow(x, 3) + a3 * pow(x, 2) + a4 * pow (x, 1) + a5;
	cout << res;
	return 0;
}