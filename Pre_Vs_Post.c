#include<stdio.h>
void main()
{
   int i=10; int j=10;
   i=    ++i;
   printf("The i value is %d \n", i);
   
   /*Pre increment operator is used to increment variable value by 1 before assigning the value to the variable.
    In the Pre-Increment, value is first incremented and then used inside the expression. */
	
    i=    ++i + i++ ;
     printf("The new-i value is %d \n", i);
     
    j= j++;
        printf("The j value is %d\n ", j);

       
/*In Post increment, the value is assigned to the variable then increment its value by 1 for the next step of execution .  */
   j= j++ + ++j;
    printf("The  new-j value is %d ", j);
}



/*  OUTPUT
The i value is 11                                                                                                              
The new-i value is 25                                                                                                          
The j value is 10                                                                                                              
 The  new-j value is 22                                                                                                        



*/