#include<stdio.h>
#include<string.h>
char ch ;
char buff[100];
char str[100];

int main()
{
    FILE *fp;
    fp =fopen("/usr/share/dict/american-english","r");
   
   while((ch=fgetc(fp))!=EOF)
   {
    fgets(buff,sizeof(buff),fp);
    
    if(buff[0] == 'm')
    {
        strcpy(str,buff);
       
    }
   }
    printf("str: %s\n",str);
}