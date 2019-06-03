#include<iostream>
using namespace std;

int main()
{
	int t,j;
	cin>>t;
	for(j=0;j<t;j=j+1)
	{

	int n,count=0,i;
	cin>>n;
	char arr[n];
	for(i=0;i<n;i=i+1)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i=i+1)
	{
		if((arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u') && (arr[i+1]=='a' || arr[i+1]=='e' || arr[i+1]=='i' || arr[i+1]=='o' || arr[i+1]=='u'))
		{
			count=count+1;
		}
	}
	cout<<count<<endl;
    }
}