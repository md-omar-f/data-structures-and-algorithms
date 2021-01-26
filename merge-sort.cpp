#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void merge(int arr[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int L[n1],R[n2];
	for(int i=0;i<n1;++i){
		L[i]=arr[l+i];
	}
	for(int j=0;j<n2;++j){
		R[j]=arr[mid+1+j];
	}
	int i=0,j=0,k=l; //starting index for L,R and arr respectively
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i]; 
			++i;
		}else{
			arr[k]=R[j];
			++j;
		}
		++k;
	}
	while(i<n1){
		arr[k]=L[i];
		++i;
		++k;
	}
	while(j<n2){
		arr[k]=R[j];
		++j;
		++k;
	}

}

void mergeSort(int arr[],int l,int r){
	if(l<r){
		int mid=l+(r-l)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

void printArray(int arr[], int arrSize){
	for(int i=0;i<arrSize;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arrSize=sizeof(arr)/sizeof(arr[0]);
	cout<<"Given array is:"<<endl;
	printArray(arr,arrSize);
	mergeSort(arr,0,arrSize-1);
	cout<<"Sorted array is:"<<endl;
	printArray(arr,arrSize);

	
	return 0;
}