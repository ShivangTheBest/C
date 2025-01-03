// A string is a 1-D character array terminated by a null character ('\0'). A null character is used to denote the termination of a string. Characters are stored in contiguous memory locations.

#include <stdio.h>

int main()
{
    char st[] = "abc";             //same as doing char st[] = {'a', 'b', 'c', '\0'};
    for(int i = 0; i <= 3; i ++)
    {
        printf("Character is %c \n", st[i]);     //Null character is printed as ' '.
    }
    return 0;
} 

//We can use 
//printf("%s", st)
//to print the entire string at once.

// We can use %s with scanf to take string input from the user.
// NOTE: scanf cannot be used to input multi-word strings with spaces.

/*
gets() is a function which can be used to receive a multi-word string.
puts() does the same thing, only that it moves the cursor to the next line after execution.
*/

// Strings can be defined using pointers. [char *ptr = "abc";]. This way, we can define a string without specifying the size of the array, and that the string can be reinitialized.