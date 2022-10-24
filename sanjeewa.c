#include <stdio.h>

int main()

{

int num[3][4];

for (int i=0;i<3;i++)

{

for (int j = 0; j < 4; j++)

{

printf("Enter num: ");

scanf("%d ", &num[i][j]);

}

}

for (int i = 0; i < 3; i++)

{

for (int j = 0; j < 4; j++)

{

printf("%d %d = %d\n", i,j, num[i][j]);

}

}

}
