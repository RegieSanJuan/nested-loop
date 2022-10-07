#include <stdio.h>
int main()
{
    int i, j, k; 
    for (i = 1; i <= 5; i++)     // count per row     i = starts with  i= count per row
    {
        for (k = 5; k>= i; k--)
        printf("");
        for (j = 1; j <= i; j++)    // ammount per row    // (>=) if -- else if (<=) ++    j = starts with j = ammount per row to start with
        {                     
          printf("%d",j);    // ascii code to type letters in loop               
            
        }   
        printf("\n");
    }
    


    return 0;

}   