#include <stdio.h>
#include <stdbool.h>

int n, curr;
int incrementar(int a);

int main(){
	printf(" %s  ","Introduce un número");
	scanf("%d",&n);
	printf(" %d  %s  ",n," == ");
	{
		curr = 2;
	}
	
	
	etiqueta0:;
	int temp1;
	temp1 = curr <= n;
	if(!temp1) goto etiqueta1;
	{
		int d;
		{
			int temp2;
			temp2 = n / curr;
			d = temp2;
		}
		int temp3;
		temp3 = d * curr;
		int temp4;
		temp4 = temp3 == n;
		if (!temp4) goto etiqueta2;
		{
			printf(" %d  %s  ",curr," ");
			{
				int temp5;
				temp5 = n / curr;
				n = temp5;
			}
		}
		goto etiqueta3;
		etiqueta2:
		{
			{
				curr = incrementar(curr);
			}
		}
		etiqueta3:;
	}
	goto etiqueta0;
	etiqueta1:
	printf(" %s  ","\n");

	return 0;
}

int incrementar(int a)
{
	
	int temp0;
	temp0 = a + 1;
	return temp0;
}
