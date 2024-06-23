#include "bits/stdc++.h"
using namespace std;

int n, m;
int a[int(1e5)+7];

int my_lower_bound(int arr[], int left, int right, int x) { // >= x
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int my_upper_bound(int arr[], int left, int right, int x) { // >
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	cin >> m;
	int x;
	for(int i = 0; i < m; i++){
		cin >> x;
		//int idx = lower_bound(a, a + n, x) - a; // >=x
		int idx = my_lower_bound(a, 0, n, x);
		
		//cout << "idx: " << idx << endl;
		if(idx >= n) cout << a[n-1] << endl;
		else {
			if(a[idx] > x) idx--;
			if(idx < 0) cout << -1 << endl;
			else cout << a[idx] << endl;
		}
	}
	
	return 0;
}