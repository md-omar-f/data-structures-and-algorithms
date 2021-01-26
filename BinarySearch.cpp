#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int l,int r,int x){
	if(l<=r){
		int mid=l+(r-l)/2;
		if(x==arr[mid])return 1;
		if(x<arr[mid]){
			return binarySearch(arr,l,mid-1,x);
		}
		return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        cout<<binarySearch(arr,0,n-1,k)<<endl;
    }
	return 0;
}