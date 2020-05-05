#include <stdio.h>

int main()
{
	struct student
    {
        int roll;
        char name[20];
        char sec;
        int marks;
    }s[2];
    printf("enter the details of the students");
    printf("(roll,name,sec,marks:\n");
    int j=1,i;
    for(i=0;i<=1;i++)
    {
        printf("enter the details of s[%d] student:\n",i);
        printf("enter the roll:");
        scanf("%d",& s[i].roll);
        printf("enter the name:");
        scanf("%s",& s[i].name);
        printf("enter the sec:");
        scanf(" %c",& s[i].sec);
        printf("enter the marks:");
        scanf("%d",& s[i].marks);
    }
    if(s[0].marks>s[1].marks)
        j=0;
    printf("details:\nroll:%d\nname:%s\nsec:%c\nmarks:%d",s[j].roll,s[j].name,s[j].sec,s[j].marks);
	return 0;
}
