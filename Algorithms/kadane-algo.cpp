#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int best=nums[0];
  int sum = nums[0];
  for(int i=1;i<nums.size();i++)
  {
      if(sum<0)
          sum=0;
          sum +=nums[i];
          best=Math.max(best,sum);
  }

  return Math.max(best,sum);
}
