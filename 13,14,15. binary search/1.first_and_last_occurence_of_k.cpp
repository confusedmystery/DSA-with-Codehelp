/* question link
https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTab=1

*/
#include <iostream>

using namespace std;

int firstoccur(int arr[],int n,int k)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k)
        {
            end=mid-1;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
    }
    return ans;
}

int lastoccur(int arr[],int n,int k)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k)
        {
            end=mid-1;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
    }
    return ans;
}



int main()
{
    int arr[5]={1,3,3,3,4};
    
    cout<<"first occurence: "<<firstoccur(arr,5,3)<<endl;
    cout<<"last occurence: "<<lastoccur(arr,5,3);
    
    return 0;
}
