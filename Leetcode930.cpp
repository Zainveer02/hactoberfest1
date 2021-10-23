#include <iostream>
#include <vector>
#include <unordered_map>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define debug(x) cout << #x << " " << x <<endl
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal) {
    int i=0, j=0, sum=0;
    int total = 0 ;
    int n = nums.size() ;
    while(i<n){

        while(sum<=goal){

            if(j<n){
                sum+= nums[j];
                j++ ;
            }
            else break ;

            if(sum==goal){
                total++ ;
                //cout<<"tot++ "<<i<<" "<<j<<endl ;
            }
        }

        sum = 0 ;
        i++ ;
        j=i ;
    }
    return total ;
}

int main()
{

    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout<<numSubarraysWithSum(nums, goal) ;
    return 0;
}
