#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int i;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   /* sort(arr,arr+n);
    cout<<"Kth max element"<<arr[n-k]<<endl;
    cout<<"Kth min element"<<arr[k-1];
    return 0;*/
    int max=arr[0];
    int temp;
    while(k--){
        max=arr[0];
         for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
            temp=i;
        }
    }
    arr[temp]=-1;
    }
    cout<<max;

}