#include<stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    fp = fopen("1.txt", "w");
    if (fp == NULL) 
    {
        perror("open failed")
        exit(-1);
    }
    fputs();

    
    return 0;
}
