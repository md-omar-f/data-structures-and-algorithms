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

void selectionSort(int a[],int n){
	for(int i=0;i<n-1;++i){
		int min_index=i;
		for(int j=i+1;j<n;++j){
			if(a[min_index]>a[j]){
				min_index=j;
			}
		}
		swap(&a[i],&a[min_index]);
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

	int a[] = {64, 25, 12, 22, 11};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The sorted array is:"<<endl;
	selectionSort(a,n);
	printArray(a,n);

	return 0;
}