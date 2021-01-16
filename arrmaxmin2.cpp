#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min,max;
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<" "<<max;
    return 0;

}