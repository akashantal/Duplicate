#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find_duplicate(int arr[],int n)
{
int w=0;
sort(arr,arr+n);
for(int j=0;j<n-1;j++)
        {
                if(arr[j+1]-arr[j]==0)
                {cout<<"duplicate found: "<<arr[j]<<"\n";
                        w++;
                }
        }
if(w==0)
cout<<"No duplicate present\n";
}

int main()
{
int n;
cout<<"Enter the size of the array: ";
cin>>n;
cout<<"Enter array: \n";
int arr[n];
for(int i=0;i<n;i++)
{
        cin>>arr[i];

}

find_duplicate(arr,n);
return 0;

}
