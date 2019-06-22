#include<iostream>
using namespace std;

void f(int A[] ,int n)
{
	int flag, i, j;
	for(i=1;i<n-1;i++)
	{
		flag = 0;
		for(j=0;j<i;j++)
			if(A[j]>A[i])
			{
				flag = 1;
				break;
			}
		for(j=i+1;j<n;j++)
			if(A[i]>A[j])
			{
				flag = 1;
				break;
			}
		if(!flag)
		{
			cout<<A[i];
			return;
		}
	}
	if(flag)
		cout<<"No such element";
	return;
}
int main()
{
	int n,a[30],i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	f(a,n);
	cout<<endl;
	return 0;
}