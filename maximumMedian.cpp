using namespace std;
#include<bits/stdc++.h>
bool check(vector<int> & arr, long long int  ope,long long int  med) {
	int n=arr.size();
	int b=arr[(n-1)/2];
	if(b==med) {
		return true;
	}
	if(med<b) {
		return false;
	}

	long long int sumi=0;
	int i=(n-1)/2;
    while(i<n && arr[i]<med){
        sumi+=(med-arr[i]);
        i+=1;
    }
	if(sumi<=ope) {
		return true;
	}
	return false;
}
void solve() {
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);

	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());
	long long int  l=arr[(n-1)/2];
	long long int  r=1e10;
	while(r-l>1) {
		long long int mid=l+(r-l)/2;
		if(check(arr,k,mid)) {
			l=mid;
		}
		else {
			r=mid;
		}
	}
	cout<<l<<endl;
}




int main() {
	solve();
}
