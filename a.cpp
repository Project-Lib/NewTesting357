#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll n,m,k,i,j,x,y,z,c,f,t,f1,f2,f3;
	string s;
	f1=f2=f3=f=0;
	cin>>s;
	vector<ll> v1,v2,v3;
	string s1="";
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='a')
		{
			v1.push_back(i);
		}else if(s[i]=='b')
		{
			v2.push_back(i);
		}else
		{
			v3.push_back(i);
		}
		if(s1[s1.length()-1]!=s[i])
		{
			s1+=s[i];
		}
	}
	if(v1.size()==0||v2.size()==0||v3.size()==0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if(s1.length()>3||s1.length()<3)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for(i=0;i<v1.size()-1;i++)
	{
		if(v1[i]+1!=v1[i+1])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	for(i=0;i<v2.size()-1;i++)
	{
		if(v2[i]+1!=v2[i+1])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	for(i=0;i<v2.size()-1;i++)
	{
		if(v2[i]+1!=v2[i+1])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if(v1[0]<v2[0]&&v2[0]<v3[0])
	{
		
	}else
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if(v3.size()==v2.size()||v3.size()==v1.size())
	{
		cout<<"YES"<<endl;
		return 0;
	}else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}