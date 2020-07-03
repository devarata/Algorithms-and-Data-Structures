#include<bits/stdc++.h>

using namespace std;

int maxProduct(vector<int>& nums) {
       if(nums.size()==1)
           return nums[0];

          int best=nums[0];
  int sum = nums[0];
  int n= nums.size();
  for(int i=1;i<n;i++)
  {


      if(sum<1&&i<(n-1)&&nums[i+1]>0)
          sum=1;
      if(i==n-1&&nums[i]>0)
          sum *=nums[i];
        sum *=nums[i];
          best=max(best,sum);
  }

  return max(best,sum);
}

int main() {
std::vector<int> v={0,2};
  int ans = maxProduct(v);
  cout<<ans<<'\n';
  return 0;
}
