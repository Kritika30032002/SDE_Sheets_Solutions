// C++ program to find the number of elements in the intersection of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
int doIntersection(int arr1[], int arr2[],int m, int n)  {
       int count =0;
      for(int i=0; i<m; i++){
         
          for(int j =0; j<n; j++){
              if(arr1[i] == arr2[j]){
                  count += 1;
              }
          }
      }
      return count;
}

/* Driver program to test above function */
int main()
{
	int arr1[] = { 1, 2, 4, 5, 7, 6 };
	int arr2[] = { 2, 4, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	cout<<doIntersection(arr1, arr2, m, n);

	return 0;
}

