#include <iostream>
using namespace std;
int lart(int arr[],int n)
{
	int b,1=arr[0]
	for(b =0;b<n;b++);
	if(1<arr[b])
	1 = arr[b];
	return 1;
	}
	
	int smat(int arr[],int n)
	{
	int b,s=arr[0],1=0;
	for(b=0;b<n;b++)
	if(1>arr[b])
	s=arr[b];
	return s;
	}
	int main()
	{

	int m,n;
	cout<<"enter the number of elements in first array"<<endl;
	cin>>m;
	cout<<"enter the number of elements in second array"<<endl;
	cin>>n;
	int arr1[m],arr2[n];
	int a;
	int b=m+n;
	int totarr[b];

	cout<<"enter elements in first array"<<endl;
	for(a=0;a<n;a++)
	cin>>arr1[a];
	cout<<"enter elements in second array"<<endl;
	for(a=0;a<n;a++)
	cin>>arr2[a];

	for(a=0;a<b;a++)
	{
	if(a<m)
	totarr[a]=arr1[a];

	else
	totarr[a]=arr2[a-m];
	}
	cout<<"largest element="<<lart(totarr,b)<<endl;
	cout<<"smallest element"<<smat(totarr,b)<<endl;

	return 0;
	}
	
