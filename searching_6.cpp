#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		int min=abs(arr[0]+arr[1]);
		int x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(min>abs(arr[i]+arr[j]))
				{
					min=abs(arr[i]+arr[j]);
					x=arr[i];
					y=arr[j];
				}
			}
		}
		cout<<x+y<<endl;
	}
	return 0;
}

