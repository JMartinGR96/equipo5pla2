#include <stdio.h>
#include <stdbool.h>

int num, n, f;
int fibonacci(int n);

int main(){
	printf(" %s  ","Qillo dame un numero--->: ");
	scanf("%d",&n);
	
	num=0;
	etiqueta8:
	if(!(num<n)) goto etiqueta9;
	{
		{
			f = fibonacci(num);
		}
		printf(" %d  ",f);
	}
	++num;
	goto etiqueta8;
	etiqueta9:;
	printf(" %s  ","\n");
	
	num=0;
	etiqueta10:
	if(!(num<n)) goto etiqueta11;
	{
		{
			f = fibonacci(num);
		}
		{
			int temp7;
			temp7 = f * 2;
			f = temp7;
		}
		printf(" %d  ",f);
	}
	++num;
	goto etiqueta10;
	etiqueta11:;

	return 0;
}

int fibonacci(int n)
{
	int a, b;
	int temp0;
	temp0 = n > 2;
	if (!temp0) goto etiqueta0;
	{
		
		int temp1;
		temp1 = n - 1;{
			a = fibonacci(temp1);
		}
		
		int temp2;
		temp2 = n - 2;{
			b = fibonacci(temp2);
		}
		
		int temp3;
		temp3 = a + b;
		return temp3;
	}
	goto etiqueta1;
	etiqueta0:
	{
	}
	etiqueta1:;
	int temp4;
	temp4 = n == 2;
	if (!temp4) goto etiqueta2;
	{
		
		return 1;
	}
	goto etiqueta3;
	etiqueta2:
	{
	}
	etiqueta3:;
	int temp5;
	temp5 = n == 1;
	if (!temp5) goto etiqueta4;
	{
		
		return 1;
	}
	goto etiqueta5;
	etiqueta4:
	{
	}
	etiqueta5:;
	int temp6;
	temp6 = n == 0;
	if (!temp6) goto etiqueta6;
	{
		
		return 0;
	}
	goto etiqueta7;
	etiqueta6:
	{
	}
	etiqueta7:;
}
