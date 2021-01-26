#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=(low-1);//index of samller element
	for(int j=low;j<=high-1;++j){
		if(arr[j]<pivot){
			++i;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return(i+1);
}

void quickSort(int arr[],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
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

	int arr[] = {10, 7, 8, 9, 1, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	cout<<"The sorted array:"<<endl;
	printArray(arr,n);

	
	return 0;
}