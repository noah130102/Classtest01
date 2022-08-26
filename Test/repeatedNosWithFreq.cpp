#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//we will make a function RepeatedNumber for printing the repeated number and its frequency
void RepeatedNumber(int* a, int n){
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"Repeated Number    Frequency\n";
   
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    //We will input the length of array n  
    int n;
    cout<<"Array length: ";
    cin>>n;

    int* a=(int*)(malloc(sizeof(int)*n));
    
    //Now we will input the array
    cout<<"Array input: ";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    RepeatedNumber(a,n);

    return 0;
}

