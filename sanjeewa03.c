#include <stdio.h>
int main()
{
	float arr[5],max=arr[0],sum=0,avg,min=arr[0];
	int i;
	for(i=0;i<5;i++){
		printf("enter your number ");
		scanf("%f",&arr[i]);
		sum=sum+arr[i];
		if(max<arr[i])
		max=arr[i];
		if(min>arr[i])
		min=arr[i];
	}
	//reverce way
	for(i=4;i>=0;i--){
		printf("%.0f ",arr[i]);
	}
	printf("\n");
	//original way
	for(i=0;i<5;i++)
	{
		printf("%.0f ",arr[i]);
	}
printf("\nmax is %.1f",max);
printf("\nsum is %.1f",sum);
printf("\navarage is %.1f",sum/5);
printf("\nmin is %.1f",min);
}
