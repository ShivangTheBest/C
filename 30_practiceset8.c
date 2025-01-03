// Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[6];
    // scanf("%s", str);
    for (i = 0; i < 5; i ++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);  //This is used to discard entry by hitting space after entering desired values each time. This error is known as buffer overflow.
    }
    str[5] = '\0';
    return 0;
}


// Write your own version of strlen function.

#include <stdio.h>

int main()
{
    char str[] = "GOOD WORK";
    char c;
    int i;
    c = '\0';
    int len;

    for(i = 0 ; str[i] != c ; i ++)
    {
        len += 1;
    }

    printf("%d", len);
    return 0;
}


// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice. *Here we use the concept that every string is terminated by a null character.

#include <stdio.h>

char* slice(char str[], int m, int n)
    {
        char *ptr1 = &str[m];
        char *ptr2 = &str[n];

        str[0] = str[m];            //Including the element from where slicing starts.
        str[n + 1] = '\0';          //Including the element till the element slicing ends.
        return str;
    }
int main()
{
    char str[] = "SHIVANGR8";
    printf("%s", slice(str, 2, 7));

    return 0;
}


//Write your own version of strcpy function.

#include <stdio.h>

// Custom strlen function
int len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// Custom strcpy function
void my_strcpy(char dest[], char src[])
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

int main()
{
    char src[] = "SHIVANG";
    char des[100];

    my_strcpy(des, src); // Use the custom strcpy function

    printf("%s\n", des); // Print the copied string
    return 0;
}


// Write a program to encrypt a string by adding 1 to the ASCII values of its characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "SHIVANG";
    for(int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;    //->effectively incrementing the ASCII value of the character at position i in the string str by 1
    }

    printf("%s", str);
    return 0;
}


// Write a program to count the occurence of a given character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int count = 0;
    char str[] = "Harry";
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        count++;
       }
    }

    printf("%d", count);
    
    return 0;
}


// Write a program to check whether a character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main(){
    char c = 'd';
    int contains = 0;
    char str[] = "Harry";
    for (int i = 0; i < 56; i++)
    {
       printf("This is a nice character  \n");  
    }
    
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        contains = 1;
        break; // This break statement will exit the loop once the character is found!
       }
    }
    if(contains){
        printf("Yes it contains!\n");
    }
    else{
        printf("Does not contain! \n");
        
    }
    
    return 0;
}