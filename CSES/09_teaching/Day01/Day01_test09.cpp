#include "bits/stdc++.h"
using namespace std;

long long f(long long x, long long y, long long n){
	long long layer = min({x, y, n - x + 1, n - y + 1});
	//cout << "layer: " << layer << endl;
	

	long long offset = 4*(layer-1)*(n-layer+1) + 1;
	
	//cout << "offset: " << offset << endl;	
	long long size_layer = n - 2 * (layer - 1);

	// top rows
	if(x == layer){
		return offset + (y - layer);
	}
	//right cols
	if(y == n - layer + 1){
		return offset + (size_layer - 1) + (x - layer);
	}
	// bottom rows
	if(x == n - layer + 1){
		return offset + 2*(size_layer - 1) + (size_layer - 1 - (y - layer));
	}
	// left cols
	return offset + 3*(size_layer - 1) + (size_layer - 1 - (x - layer));
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n; cin >> n;
	long long x, y; cin >> x >> y;
	
	cout << f(x, y, n);
	
	/*
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << f(i, j, n) << " ";
		}
		cout << endl;
	}
	*/
	
	return 0;
}