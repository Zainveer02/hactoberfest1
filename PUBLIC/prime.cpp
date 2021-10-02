#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int t,n;
    int flag=0;
    int nums[100];
    cout<<"Number of test cases"<<endl;
    cin>>t;
    cout<<"Enter numbers one by one"<<endl;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        nums[k]=n;
    }
    for(int i=0;i<t;i++)
    {
        for(int j=2;j<=sqrt(nums[i]);j++)
        {
            if(nums[i]%j==0)
            {
                cout<<"not prime"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
             cout<<"prime"<<endl;
        }
        else
             flag=0;
    }

    return 0;
}