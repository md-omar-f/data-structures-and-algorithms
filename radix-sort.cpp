#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void countingSort(int arr[],int n,int exp){
	int cnt[10]={0};
	int output[n];
	for(int i=0;i<n;++i){
		++cnt[(arr[i]/exp)%10];
	}
	for(int i=1;i<10;++i){
		cnt[i]+=cnt[i-1];
	}
	for(int i=n-1;i>=0;--i){
		output[cnt[(arr[i]/exp)%10]-1]=arr[i];
		--cnt[(arr[i]/exp)%10];
	}
	for(int i=0;i<n;++i){
		arr[i]=output[i];
	}
}

int maxElem(int arr[],int n){
	int mx=arr[0];
	for(int i=1;i<n;++i){
		if(mx<arr[i]){
			mx=arr[i];
		}
	}
	return mx;
}

void radixSort(int arr[],int n){
	int m=maxElem(arr,n);
	for(int exp=1;m/exp>0;exp*=10){
		countingSort(arr,n,exp);
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[]={3,12,435,2};
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<"The sorted array is:"<<endl;
	radixSort(arr,n);
	printArray(arr,n);

	return 0;
}