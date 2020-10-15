#include<iostream>
#include<cmath>

using namespace std;

main()
{
	int trynum;
	cin>>trynum;//시도횟수 입력 
	float x1[1000], y1[1000], r1[1000], x2[1000], y2[1000], r2[1000], diff[1000];
	for (int a=0;a<trynum;a++)
	{
		cin>>x1[a]>>y1[a]>>r1[a]>>x2[a]>>y2[a]>>r2[a];//변수 입력 
		
		diff[a]=sqrt((x1[a]-x2[a])*(x1[a]-x2[a])+(y1[a]-y2[a])*(y1[a]-y2[a]));
	}
	for(int a=0;a<trynum;a++)
	{
		if(x1[a]==x2[a]&&y1[a]==y2[a]&&r1[a]==r2[a])
		{
			cout<<-1;
			
		}
		else if(diff[a]<r1[a]+r2[a]&&r1[a]<diff[a]+r2[a]&&r2[a]<r1[a]+diff[a])
		{
			cout<<2;
		}
		else if(diff[a]==r1[a]+r2[a]||r1[a]==diff[a]+r2[a]||r2[a]==diff[a]+r1[a])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
		cout<<"\n";
	}
}
