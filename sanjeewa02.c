#include <stdio.h>
int main ()
{
	int no,ce=0,co=0,c=1;

		while(c<=10)
		{
		printf("innput %d number  ",c);
		scanf("%d",&no);
		if(no%2==0)
		ce=ce+1;
		else
		co=co+1;
		c++;
		}
		
	printf("total numer of odd nmber %d \n",co);
	printf("total numer of even nmber %d \n",ce);
}
