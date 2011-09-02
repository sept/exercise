/*****************************
由1，2，3，4组成不重复的三位数
******************************/
#include <stdio.h>

int main(void) 
{ 
    int i,j,k; 

    for(i=1;i<5;i++) 
    {
        for(j=1;j<5;j++)
        {
            for (k=1;k<5;k++)
            { 
                if (i!=k&&i!=j&&j!=k) 
                printf("%d,%d,%d\n",i,j,k); 
            } 
        }
     }       
    return 0;
} 

