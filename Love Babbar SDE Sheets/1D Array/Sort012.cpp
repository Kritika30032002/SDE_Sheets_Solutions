// sort 0s, 1s and 2s 
#include<iostream>
using namespace std;
int main()
{
  int arr[] = {0,1,2,0,1,1,0,2,2};     // have to make it like {0,0,0,1,1,1,2,2,2}
  int n = sizeof(arr)/sizeof(int);
  int low = 0;
  int high = n-1;
  int mid = 0;
  while(mid <= high){
  switch(arr[mid])
  { 
    case 0: swap(arr[low++], arr[mid++]);
            break;
    case 1: mid++;
            break;
    case 2: swap(arr[mid], arr[high--]);
            break;
  }
  }
}
