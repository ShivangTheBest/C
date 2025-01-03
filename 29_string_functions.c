/*   1. STRLEN- find the length of the string.   */

#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "SHIVANG";
    int len = strlen(st1);
    printf("%d", strlen(st1));   //strlen() is a function that returns the length of the string excluding the null character.
    printf("%d", len);
    return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------------*/

/*   2. STRCPY- copy the content of second string into first string passed to it.   */

#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "SHIVANG";
    char st2[100];
    strcpy(st2, st1);    //strcpy(destination, source)
    printf("%s %s", st2, st1);
    return 0;
}    //Output: SHIVANG SHIVANG
/*---------------------------------------------------------------------------------------------------------------------------------*/


/*   3. STRCAT- used to concatenate two strings.   */

#include <stdio.h>
#include <string.h>

int main()
{
    char st1[] = "SUPER";
    char st2[] = "MAN";
    strcat(st1, st2);   //concatenates st2 to st1
    printf("%s", st1);
    return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------------*/



/*   4. STRCMP- compares two strings.   */
// This function returns 0 if the strings are equal, a negative value if the first string's mismatching character's ASCII value is lesser than the second string's corresponding mismatching character's ASCII value. And vice versa for a positive value.

#include <stdio.h>
#include <string.h>

int main()
{
    int a = strcmp("far", "joke");
    printf("%d", a);
    
    return 0;
}