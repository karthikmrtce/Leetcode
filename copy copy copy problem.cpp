#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[n];
	set<int>s;
	for(int i=0;i<n;i++)
	{
	   cin>>a[i];
	   s.insert(a[i]);
	}
	cout<<s.size()<<endl;
	}
	return 0;
}