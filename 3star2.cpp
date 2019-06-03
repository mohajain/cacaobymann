#include<iostream>
using namespace std;

 int main()
 {
 	int t,j;
 	cin>>t;
 	for(j=0;j<t;j=j+1)
 	{


 	string s;
 	cin>>s;
 	int l=s.length();
 	if(l%2==0)
 	{
 		cout<<"!DPS"<<endl;
 	}
 	else if(l%2==1)
 		{
 			cout<<"DPS"<<endl;
 		}

     }
 }
