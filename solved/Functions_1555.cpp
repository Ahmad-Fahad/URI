#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testCase = 0,x = 0,y = 0;

	scanf("%d",&testCase);

	while(testCase--)
	{
		int r = 0,b = 0,c = 0;

		scanf("%d %d",&x,&y);

		r = 9*x*x + y*y;

		b = 2*x*x + 25*y*y;

		c = -100*x + y*y*y;

		if(r>b && r>c)
		{
			printf("Rafael ganhou\n");
		}
		else if(b>c && b>r)
		{
			printf("Beto ganhou\n");
		}
		else if(c>r && c>b)
		{
			printf("Carlos ganhou\n");
		}

	}

	return 0;
}

