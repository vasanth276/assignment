#include <stdio.h>
void swap(int  *a,int *b,int *temp)
{
    *temp=*a;
    *a=*b;
    *b=*temp;
    printf("after swaping:\na=%d\nb=%d",*a,*b);
}
int main()
{
    int a,b,temp;
    printf("enter the value of a and b:");
    scanf("%d%d\n",& a,& b);
    printf("before swaping:\na=%d\nb=%d",a,b);
    swap(&a,&b,&temp);
    return 0;
}
