#include <iostream>
#include <algorithm>

using namespace std;

int main (){

    int n;

    //we take an input n for the length of array
    cout<<"Array length: ";
    cin>>n;

    int arr[n];
    //array of length n

    //for input array --
    cout<<"Array input:  ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //now we have inputted the array now we will sort it using sort function inside the class algorithm

    sort(arr,arr+n);

    //now that we have sorted the array we will the repeated elements 
    cout<<"Non-Repeated numbers are: ";
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    
    
    return 0;

}