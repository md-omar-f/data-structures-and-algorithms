#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void insertionSort(vector<int>&vec){
	for(auto it=vec.begin();it!=vec.end();++it){
		auto const insertPosition=upper_bound(vec.begin(),it,*it);
		rotate(insertPosition,it,it+1);
	}
}

void printArray(vector<int>vec){
	for(int i=0;i<vec.size();++i){
		cout<<vec[i]<<" ";
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> arr = {2, 1, 5, 3, 7, 5, 4, 6};
	cout<<"The sorted array is: "<<endl;
	insertionSort(arr);
	printArray(arr);

	return 0;
}