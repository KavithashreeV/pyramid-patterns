#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i, j, rows, k;  
    printf (" Enter number of rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}  

OUTPUT:

Enter number of rows: 
 5

 *****
  ****
   ***
    **
     *
