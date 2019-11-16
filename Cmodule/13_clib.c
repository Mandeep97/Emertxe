/*
Implement your own c-type library (any four).Description:
• c-type library functions check whether c, which must have the value of an
unsigned char or EOF, falls into a certain character class according to the current
locale.
◦ isalnum() - checks for an alphanumeric character; it is equivalent to
(isalpha(c) || isdigit(c)).
◦ isalpha() - checks for an alphabetic character; in the standard "C" locale, it is
equivalent to (isupper(c) || islower(c)). In some locales, there may be
additional characters for which isalpha() is true—letters which are neither
upper case nor lower case.
◦ isascii() - checks whether c is a 7-bit unsigned char value that fits into the
ASCII character set.
◦ isblank() - checks for a blank character; that is, a space or a tab.
Pr-requisites: -
• Loops
• Functions
Objective: -
• To understand the concept of
◦ Functions
*/
#include<stdio.h>                        // header file
int is_alnum(int ch)                  //function definition for is_alphanum
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='b' || ch>='0' && ch<='9')
	return 1;
    else
	return 0;

}
int is_alpha(int ch)                  // function defnition for is_alpha
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	return 1;
    else
	return 0;
}
int is_ascii(int ch)             // function defnition for is_ascii
{
    
}
int is_space(int ch)             //function definition for is_space 
{

}
int main()                       // main
{
    char ch;                  // declaring the chracter
    int i;                   // declaring the interger
    printf("enter the chrarcter\n");// entering the character
    scanf("%c",&ch);              // reading the characetr
    printf("1.is_alphanum/n2.is_alpha/n3.is_ascii/n4.is_space/n"); // selecting the choice
    scanf("%d",&i); // reading the option
    switch (i) // switch case select the library
    {
	case 1:
	    {
		if(is_alnum(ch))                           // if condition to check the entered character is alphnum or not
		    printf("yes it is alnum\n");
		else
		    printf("NO it is not alnum\n");
	    }
	    break;
	case 2:
	    {
		if(is_alpha(ch))                             // if condition to check the entered character is alphabetic or not 
		    printf("yes it is alphabetic\n");
		else
		    printf("No it is not alphabetic\n");
	    }
	    break;
	case 3:
	    {
		if(is_ascii(ch))                            //if condition to check the entered character is ascii value or not
		    printf("yes it is ascii\n");
		else
		    printf("no it is not ascii\n");

	    }
	    break;
	case 4:
	    {
		if(is_space(ch))                          // if condition to check the entered character is spece or not
		    printf("yes it is space\n");
		else
		    printf("NO it is not a space\n");
	    }
	    break;
	default:
	    printf("enter correct statement\n");
    }
}
