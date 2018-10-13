#include <iostream>
#include<algorithm>
using namespace std;
	
// function to find largest
	int largest(int arr[], int n){
	int max=arr[0];
	for (int i=0; i<n; i++) {
	if(arr[i]>max){
	max=arr[i];
	}
	}
   return max;
}
	// function to find smallest
	int smallest(int arr[], int n){
	int min=arr[0];
	for (int i=0; i<n; i++) {
	if(arr[i]<min){
	min=arr[i];
	}
	}
	 return min;
}
	//function to find mean
	float mean(int arr[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
	sum = sum + arr[i];
}
      return sum;
}

	//function  to find median
      float median(int arr[],int n){
	float med; 
	sort(arr,arr+n);
	// if no.of elements is odd , median = ((n + 1)/2)th value
	if (n%2!=0){
	med= arr[n/2];
	}
	// if no. of elements even , median = (value before median + value above median)
	else {
	med= (arr[(n-1)/2] +arr[n/2])/2;
	}
	return med;
	}
//function to find elements with highest frequency of all elements 
int frequency (int arr[], int n){
	return n;
	}

	int main(){
	int n,k; 
	int arr[n];
	cout<<"Enter no. of elements"<< endl;
	cin>>n;
	for (int i=0; i<n; i++) {
	cout<<"Enter"<<i+1<<"th element of an array "<< endl;
	cin>>k;
	arr[i]=k;
	}
	
	cout<< "largest element ="<< largest(arr,n)<<endl;
	cout<< "smallest element ="<< smallest(arr,n)<<endl;
	cout<< "mean ="<< mean(arr,n)<<endl;
	cout<< "median ="<< median(arr,n)<<endl;
	cout<<"Element with highest frequency"<< frequency(arr,n)<<endl;

	return 0;
}









	
