#include "bits/stdc++.h"
using namespace std;

int n, q;
int a[int(1e7)+7];

bool bs(int arr[], int left, int right, int x) {
	while (left <= right) {
		int mid = left + (right - left) / 2; 
	    if (arr[mid] == x) {
	      return true; 
	    } 
	    if (arr[mid] > x) {
	      right = mid - 1; 
	    } 
	    else {
	      left = mid + 1; 
	    }
	}
  	return false;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n; cin >> q; 
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	
	int x;
	for(int i = 0; i < q; i++){
		cin >> x;
		
		if(bs(a, 0, n - 1, x)) cout << "YES";
		else cout << "NO";
		
		cout << "\n";
		
		
		/*
		int idx = lower_bound(a, a + n, x) - a; // >=
		if(idx >= n) cout << "NO";
		else if(a[idx] == x) cout << "YES";
		else cout << "NO";
		cout << "\n";
		*/
		
	}
	return 0;
}