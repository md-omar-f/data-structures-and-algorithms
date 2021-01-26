#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int binarySearch(int a[],int item,int low,int high){
	if(high<=low){
		return(item>a[low]?low+1:low);
	}
	int mid=low+(high-low)/2;
	if(item==a[mid])return mid+1;
	if(item>a[mid])return binarySearch(a,item,mid+1,high);
	return binarySearch(a,item,low,mid-1);
}

void insertionSort(int a[],int n){
	int i,j,loc,selected;
	for(i=1;i<n;++i){
		j=i-1;
		selected=a[i];
		loc=binarySearch(a,selected,0,j);
		while(j>=loc){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=selected;
	}
}

void printArray(int a[],int n){
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The sorted array is: "<<endl;
	insertionSort(a,n);
	printArray(a,n);

	return 0;
}