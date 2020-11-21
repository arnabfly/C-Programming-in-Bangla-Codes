/*Documentation Section*/
/***********************************************************
Program Name: basicStructure.c (Basic Structure of C Program)
Author: Arnab
Details: It will show the basic struct of a C Program
***********************************************************/
/*End of Documentation Section*/

/*Link Section*/
#include <stdio.h>
/*End of Link Section*/

/*Definition Section*/
#define n 10
/*End of Definition Section*/

/*Global Declaration Section*/
void function1(void);
int b = 10;
/*End of Global Declaration Section*/

/*Main Function Section*/
int main()
{
    /*Declaration Part*/
    int a;
    /*End of Declaration Part*/
    
    /*Executable Part*/
    a = n + b;
    printf("Answer: %d\n",a);
    function1();
    /*End of Executable Part*/
    return 0;
}
/*End of Main Function Section*/

/*Subprogram Section*/
void function1()
{
    printf("Hello World");
}
/*End of Subprogram Section*/
