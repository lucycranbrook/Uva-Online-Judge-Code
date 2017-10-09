// Uva Online Judge
//Winterim Backpacking Trip : 907
#include<bits/stdc++.h>

using namespace std;
int n, k, arr[678];

int cek(int haha){
	int sum = 0, cnt = 0;
	for(int i = 0; i <= n; i++){
		if(arr[i] > haha) return 0;
		if(arr[i] + sum > haha) {
			sum = arr[i]; ++cnt;
		}else sum += arr[i];
	}
	if(sum) ++cnt;
	return cnt <= k;
}

int main(){
	while(cin >> n >> k){
		++n; ++k; 
		int right = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			right += arr[i];
		}
		int left = 0, mid;
		while(left <= right){
			mid = left + (right - left) / 2;
			if(cek(mid)){
				right = mid - 1;
			}else left = mid + 1;
		} printf("%d\n", right + 1);
	}	
}
