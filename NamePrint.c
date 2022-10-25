#include <stdio.h>

int main(){
	char str[100];
	printf("Enter Your Name: ");
	scanf("%[^\n]s", &str);
	printf(" Hi %s \n", str);
	return 0;
}