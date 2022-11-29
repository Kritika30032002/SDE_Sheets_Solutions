// Approach 1 :- simply sort the given array and return the k-1 th element, that will be the kth smallest element 

#include<iostream>
#include<algorithm>
using namespace std;
int sort(int arr[], int n, int k){
  sort(arr, arr+n);
  return arr[k-1];
}
int main()
{
  int arr[] = {2,1,6,8,-1,4}; 
  int n = sizeof(arr)/sizeof(int);
  int k = 4;
  cout<<"kth smallest number is:"<<sort(arr,n,k);
  return 0;
}
__________________________________________________________________________________________________________________________________________

//Approach 2:- Using the maxHeap will can find the kth smallest element.

//1. k must be less than the total no. of elements of the array.
//2. We will push the k number of elements into the maxHeap.
//3. When we will try to push k+1 th number of element into the maxHeap, we will pop one element(largest element of the maxHeap will pop out), this step will be followed until we traversed all the elements. 
//4. Then we will return the top element from the maxHeap, that will be the kth smallest element.

#include<iostream>
using namespace std;
int kthSmallestElement(int arr[], int l, int h, int k){
  priority_queue<int> maxHeap;
  for(int i=l; i<=r; i++){
    maxHeap.push(arr[i]);
    if(maxHeap.size() > k){
      maxHeap.pop();
    }
  }
  return maxHeap.top;
}
