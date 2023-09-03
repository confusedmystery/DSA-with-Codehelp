
#include <iostream>

using namespace std;

int occur(int arr[],int s,int n,int k)
{
    int start=s,end=n-1,ans=0,ans2;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k)
        {
            ans++;
            int left=mid-1;
            while(left>=start&&arr[left]==k)
            {
                ans++;
                left--;
            }
            
            int right=mid+1;
            while(right<=end&&arr[right]==k)
            {
                ans2++;
                right++;
            }
            return ans2+ans;
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
    int arr[5]={1,3,3,3,3};
    
    cout<<"total occurence: "<<occur(arr,0,5,3)<<endl;

    
    return 0;
}
