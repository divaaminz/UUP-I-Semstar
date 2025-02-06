#include <stdio.h>

int main(){
   int i,j,mat[4][4] = {{7,3,3,7},
{7,7,9,7},{7,5,4,7},{9,4,2,6}};
int rez=0;
for (i=0; i<4; i++)
	for (j=0; j<4; j++)
		if (i%2==1 && j%2==1)
			rez+=mat[i][j];
printf("rez=%d", rez);


}