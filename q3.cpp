
// Simple C++ program to find k'th smallest element 
#include<iostream> 
#include<algorithm> 
using namespace std; 
  
// Function to return k'th smallest element in a given array 
int kthSmallest(int arr[], int n, int k) 
{ 
    // Sort the given array 
    sort(arr, arr+n); 
  
    // Return k'th element in the sorted array 
    return arr[k-1]; 
} 
  void kLargest(int arr1[], int n1, int k1) 
{ 
    // Sort the given array arr in reverse  
    // order. 
    sort(arr1, arr1+n1, greater<int>()); 
  
    // Print the first kth largest elements 
    for (int i = 0; i < k1; i++) 
        cout << arr1[i] << " ";
}

int main() 
{ 
    int arr[] = {12, 3, 5, 7, 19}; 
    int n = sizeof(arr)/sizeof(arr[0]), k = 1; 
    cout << "K'th smallest element is " <<  kthSmallest(arr, n, k)<<endl; 

    int arr1[] = {1, 23, 12, 9, 30, 2, 50}; 
    int n1 = sizeof(arr1)/sizeof(arr1[0]); 
    int k1=1;
   kLargest(arr1, n1, k1); 
    return 0; 
} 

