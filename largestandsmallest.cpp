#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,a[4][4];
	int max,min;
	max=min=a[0][0];
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			{
				if(a[i][j]<min)
				min=a[i][j];
			}
		}
	}
	
			cout<<"the largest = "<<max<<endl;
			cout<<"the smallest = "<<min<<endl;
	

	getch();
	return 0;
}

