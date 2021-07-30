/*
2. Open the file /usr/share/dictionary in process P1 and 
send the strings starting with letter 'm' to process P2 using share memory.
 In process P2 find and print the length of string.
*/


#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>   
#include<stdio.h>
#include<unistd.h>

#include<string.h>
char *count;
unsigned char buff[64]="mahesh\n";

int main()
{
    int shmd;
    int num;
    
    shmd=shm_open("/vi",O_RDWR | O_CREAT,S_IRWXU);
    ftruncate(shmd,sizeof(buff));

    count=(char*)mmap(NULL,sizeof(buff),PROT_READ | PROT_WRITE,MAP_SHARED,shmd,0);

    strcpy(count,buff);

    return 0;
}