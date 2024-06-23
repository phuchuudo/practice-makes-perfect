#include "bits/stdc++.h"
using namespace std;

int n;
int a[(int)1e5 + 7];
int res[(int)1e5 + 7];


void merge(int a[], int n, int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	int leftArr[n1], rightArr[n2];
	for(int i = 0; i < n1; i++){
		leftArr[i] = a[left + i];
	}
	
	for(int j = 0; j < n2; j++){
		rightArr[j] = a[mid + 1 + j];
	}
	
	int i = 0, j = 0, k = left;
	while(i < n1 && j < n2){
		if(leftArr[i] <= rightArr[j]){
			a[k++] = leftArr[i++];
		}
		else {
			a[k++] = rightArr[j++];
		}
	}

	while(i < n1){
		a[k++] = leftArr[i++];
	}
	while(j < n2){
		a[k++] = rightArr[j++];
	}
}

void mergeSort(int a[], int n, int left, int right){
	if(left < right){
		int k = (left + right) / 2;
		mergeSort(a, n, left, k);
		mergeSort(a, n, k + 1, right);
		merge(a, n, left, k, right);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	mergeSort(a, n, 0, n - 1);	
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(i == 0) res[cnt++] = a[i];
		else if(a[i] != a[i-1]){
			res[cnt++] = a[i];
		}
	}
	cout << cnt << endl;
	for(int i = 0; i < cnt; i++){
		cout << res[i];
		if(i != cnt - 1) cout << " ";
	}
	return 0;
}