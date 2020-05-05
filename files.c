#include <stdio.h>
int main()
{
    FILE *fp;
    int i;
    char name[20];
    fp=fopen("C:\\input.txt","w");
    if(fp==NULL)
    {
        printf("file could not be opened\n");
    }
    else
    {
        gets(name);
        for(i=0;i<name[i];i++)
            fputc(name[i],fp);
        fclose(fp);   
    }
    fp=fopen("C:\\input.txt","r");
    for(;(i=fgetc(fp))!=EOF;)
        printf("%c",i);
    return 0;
}
