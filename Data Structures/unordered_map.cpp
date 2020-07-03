#include<bits/stdc++.h>
using namespace std;

int main()
{
unordered_map<char,int> um;

//add element
um.insert({'a',1});
um.insert({'b',5});
um.insert({'c',3});
um.insert({'d',4});

//find element
cout<<um['c']<<'\n';

//iterate
for(auto itr:um)
{
  cout<<itr.first<<":"<<itr.second<<"\n";
}

//erase elements
int c=0;
for(auto itr:um)
{
  if(c%2==0)
  {
    //erase the key
    um.erase(itr.first);
  }
  c++;
}

for(auto itr:um)
{
  cout<<itr.first<<":"<<itr.second<<"\n";
}

  return 0;
}
