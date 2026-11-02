#include<iostream>
using namespace std;


int main()
{
int arr[] = {2, 7, 11, 15};
int target = 9;
int n=5;
for(int i=0;i<=n-2;i++)
{  
    for(int j=i+1;j<n-1;j++)
    {
        if(arr[i]+arr[j]==target)
    
    cout << arr[i] << " " << arr[j];
    }a

}
}