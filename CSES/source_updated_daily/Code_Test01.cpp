#include "bits/stdc++.h"
using namespace std;


int a[1005];
int n;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i];
		if(i != n - 1) cout << " ";
	}
	
	
	return 0;
}