#include<iostream>
using namespace std;

int count_invs(int A[] ,int n)
{
	int count = 0, i, j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(A[i]>A[j])
				count++;
	return count;
}
int main()
{
	int n,a[30],i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<count_invs(a,n)<<endl;
	return 0;
}