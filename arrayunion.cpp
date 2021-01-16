#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[100],arr3[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>arr2[j];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j]) 
            {
                arr3[k]=arr1[i];
                k++;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}