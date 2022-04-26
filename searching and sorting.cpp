#include<iostream>
using namespace std;
int Bsearch(int*arr,int n,int x)
{
	int s=0,e=n-1;
	while(s<=e)
	{
		int m = (s+e)/2;
		if(arr[m]==x)
		{
		  cout<<"Element present at Index "<<m<<endl;
		  return 0;
		}
		else if(arr[m]<x)
		{
			s = m+1;
		}
		else
		{
			e = m-1;
		}
	}
	
}
void Ssort(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int min=arr[i],index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{
				min = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = min;
		arr[index] = temp;
	}
}
void Bsort(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int n,x;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	Bsort(a,n);
	cout<<"Sorted Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	Bsearch(a,n,x);
}
