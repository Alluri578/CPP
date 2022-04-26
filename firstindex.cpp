#include<iostream>
using namespace std;
int index(int input[],int size,int x,int count=0)
{
	if(size==0)
	{
		return -1;
	}
	int ans = index(input+1,size-1,x);
	if(ans!=-1)
	{
		return ans+1;
	}
	if(input[0]==x)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int n;
	cin>>n;
	int *p = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int x;
	cin>>x;
	cout<<index(p,n,x);
}
