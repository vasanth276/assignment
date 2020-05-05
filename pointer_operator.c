#include <stdio.h>
void sum(int *a,int *b,int *total)
{
    *total=*a+*b;
}
int main()
{
    int a,b,total;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
	sum(&a,&b,&total);
    printf("total=%d",total);
	return 0;
}
