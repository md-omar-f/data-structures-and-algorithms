#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a=5;

	printf("address of a : %d\n",&a);
	printf("value in a : %d\n",a);

	int *ptr = &a;

	printf("address of ptr : %d\n",ptr);
	printf("value of ptr : %d\n",*ptr);

	*ptr = 100;
	printf("now the value of a : %d\n",a);
	a = 50;
	printf("now the value in ptr : %d\n",*ptr);

	int b[2] = {20,25};
	printf("value of b[0] : %d\n",*(b+1));

	int *ptr2 = &(*(b+1));

	printf("address of ptr2 : %d\n",ptr2);

	*ptr2 = 70;

	printf("now the value of b[1] : %d\n",b[1]);

	for(auto a:b)cout<<a<<" ";

	int c[5]={10,15,5,6,90};
	
	cout<<endl;

	for(auto z:c)cout<<z<<" ";

	cout<<endl;

	int *ptr3=(int*)2293316;
	
	printf("explicit result : %d\n", *ptr3);

	int *ptr4=(int*)2293300;
	printf("value at address of aaa in external program: %d\n", *ptr4);

	return 0;
}