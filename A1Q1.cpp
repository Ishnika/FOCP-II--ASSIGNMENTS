#include <iostream>
#include<string>
using namespace std;
int main() {
	int n ,k;
	cin>> n >>k;
	string bulbs;
	cin>>bulbs;
	int l,i,j,opp;
	for(l=1;l<=n;l++)
	{
		string copy=bulbs;
		int count=0;
		for(i=0;i<n;i++)
		{
			if(copy[i]=='0')
			continue;
			else
			{
				count++;
				for(j=i;j<i+l && j<n;j++)
				{
					copy[j]='0';
				}
				i=i+l-1;
			}
		}
		if(count<=k)
		{
			opp=l;
			break;
		}
		else 
		continue;
	}
	cout<<opp;
	return 0;
}