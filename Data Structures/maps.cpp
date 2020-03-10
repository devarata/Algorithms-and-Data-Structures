#include<bits/stdc++.h>
using namespace std;


int main()
{
	map<int,int> m;
	int arr[] = {1,5,3,10,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		m.insert(pair<int,int>(arr[i],i));
	}

	cout<<"Key"<<"\t"<<"val:\n";

	for (auto i = m.begin(); i !=m.end(); i++)
	{
			cout<<i->first<<"\t"<<i->second<<"\n";
	}

	cout<<"--------------------------------------"<<"\n";
	auto temp = m.find(1);
	cout<<temp->second;



	return 0;
}

