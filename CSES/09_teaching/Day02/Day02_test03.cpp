#include "bits/stdc++.h"
#define ll long long int

using namespace std;

ll f(ll x, ll y, ll n){
	
	ll layer = min({x, y, (n-x+1), (n-y+1)});
	// x = 1 or x = 5 --> layer 1
	// y = 1 or y = 5 --> layer 1
	
	ll cnt = 0;
	ll edge = n;
	
	for(int i = 1; i < layer; i++){
		cnt += 4 * (edge - 1);
		edge -= 2;
	}
	
	ll val_x0_y0 = cnt + 1;
	ll index_x0 = layer;
	ll index_y0 = layer;
	ll layer_size = n - 2 * (layer - 1);
	// top row
	if(x == layer){
		return val_x0_y0 + (y - layer);
	}
	// right columns
	if(y == n - layer + 1){
		return val_x0_y0 + (layer_size - 1) + (x - layer);
	}
	// bottom row
	if(x == n - layer + 1){
		return val_x0_y0 + 2 * (layer_size - 1) + (layer_size - 1 - (y - layer));
	}
	// left col
	return val_x0_y0 + 3 * (layer_size - 1) + (layer_size - 1 - (x - layer));
	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << f(i, j, n) << " ";
		}
		cout << endl;
	}
	
	return 0;
}