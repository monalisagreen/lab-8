#include <iostream>
using namespace std;
	int main() {

	// function to return the sum of the element

	int arr[10], n, i, sum=0;
	cout<<"Enter the size of the array";
	cin>> n;
	cout<<"Enter the elements of the array";


	for ( i = 0; i< n; i++)
	cin>>arr[i];
	for ( i = 0; i< n; i++)
{
	
	sum += arr[i];
	}
	cout<<"sum of the array elements"<<sum;
	return 0;
}
