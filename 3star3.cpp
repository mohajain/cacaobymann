#include<iostream>
using namespace std;

int reverse(int x)
{
	int b,r,sum=0;
	b=x;
	while(b!=0)
	{
		b=b/10;
		count=count+1;
	}
	while(b!=0)
	{
       r=b%10;
       sum=sum+pow(10,count-1)*r;
       b=b/10;
       count=count-1;
	}
	return (sum);
}





int main()
{
	int n,a,n1,q1,q,r;
	cin>>n;
	a=n;
	
	r=n%10;
	q=n/10;
	if(r==9)
	{
		ans=reverse(n);
	}
	else
	{
		q1=q-1;
		n1=(q1*10)+9;
		ans=reverse(n1);
	}
	cout<<ans<<endl;

}
