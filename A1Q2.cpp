#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0)
	{
		int N;
		cin>>N;
		int count=0;
		for(int i=1;i*i<=N;i++)
		{
			if(N%i==0)
			{
				int j=N/i;
				if(__gcd(i,j)==1)
				{
					if(i==j)
					count++;
					else 
					count+=2;
				}
			}
		}
		cout<<count<<endl;
		T--;
	}
	return 0;
}
