#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

void bubbleSort(int arr[],int n){
	int i,j;
	bool swapped;
	for(i=0;i<n-1;++i){
		swapped=false;
		for(j=0;j<n-1-i;++j){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)break;
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

	int arr[]={50,10,20,15,30,11,95,41};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Sorted array"<<endl;
	bubbleSort(arr,n);
	printArray(arr,n);

	
	return 0;
}