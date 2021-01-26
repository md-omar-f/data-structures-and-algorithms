#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define maxx 255

void countingSort(char arr[]){
	char output[strlen(arr)];
	int cnt[maxx+1];
	memset(cnt,0,sizeof(cnt));
	for(int i=0;arr[i];++i){
		++cnt[arr[i]];
	}
	for(int i=1;i<=maxx;++i){
		cnt[i]+=cnt[i-1];
	}
	for(int i=0;arr[i];++i){
		output[cnt[arr[i]]-1]=arr[i];
		--cnt[arr[i]];
	}
	for(int i=0;output[i];++i){
		arr[i]=output[i];
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char arr[]="cacb";
	countingSort(arr);
	cout<<"The sorted array is: "<<arr;

	return 0;
}