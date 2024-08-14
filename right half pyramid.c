#include<stdio.h>  
void main()  
{  
      
    int i, j, rows, k;  
    printf (" Enter number of rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
}  

OUTPUT:

Enter number of rows: 
 5

    *
   **
  ***
 ****
*****
