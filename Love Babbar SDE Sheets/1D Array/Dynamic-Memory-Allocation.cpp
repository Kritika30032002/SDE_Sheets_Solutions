#include<iostream>
using namespace std;
int main()
{
    //dynamic array
    int n;
    cin>>n;
    int *arr = new int[n];
    *arr = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete [] arr;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
