#include <iostream>
using namespace std;
int main()
{
	float ave =0,sum=0,b=0;
	float a[5];
	{
		for(int i=0;i<=4;i++)
		{
			cin>> a[i];
			sum=sum+a[i];
		}
		ave=sum/5;
	}
	for(int i=0;i<=5;i++)
	{
		b=a[i]-ave;
		if(b<0)
		{
			b=-b;
		}
		if(b>=1)
		{
			cout<<"index :"<<i<<endl;
		}
	}
	cout<<"ave is :"<<ave<<endl;
	return 0;
}

//good luck :)

