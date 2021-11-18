//maximum of 4 numbers using functions
#include<iostream.h>
using namespace std;

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	int max = max_of_four(a,b,c,d);
	printf("%d", max);
}

int max_of_four(int a, int b, int c, int d)
{
	return max(max(a,b),max(c,d));
}
