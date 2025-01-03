/* 
A file pointer can be created as follows:
FILE *ptr;
ptr = fopen("filename.ext", "mode");

File opening modes in C:
    * r: Opens a file for reading. The file must exist.

    * w: Opens a file for writing. If the file exists, its contents are overwritten. If the file does not exist, a new file is created.

    * a: Opens a file for appending. If the file does not exist, a new file is created.

    * a+: Opens a file for both reading and appending. If the file does not exist, a new file is created.

    * rb: Opens a file for reading in binary mode. The file must exist.

    * wb: Opens a file for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, a new file is created.
*/

/*--------------------------------READ--------------------------------*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("shivang.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);   //--> Output will be 23.

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);   //--> Output will be 55, as file pointer moves as you read a file.  

    fclose(ptr);

    return 0;
} 

/*--------------------------------WRITE--------------------------------*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("shivang.txt", "w");
    int num = 555;
    fprintf(ptr, "%d", num);    //--> Everything written in the file is deleted, and only 555 is printed.

    fclose(ptr);

    return 0;
}   

/*--------------------------------APPEND--------------------------------*/

int main()
{
    FILE *ptr;
    ptr = fopen("shivang.txt", "a");
    int num = 555;
    fprintf(ptr, "%d", num);    //--> 555 is added at the end of the file, the last point where the cursor can go.

    fclose(ptr);

    return 0;
}   

/*--------------------------------FGETC AND FPUTC--------------------------------*/
// These are used to read and write a single character from / to a file.

/*--------------------------------EOF--------------------------------*/

/*The below given program is used to read character by character.*/

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("shivang.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        //when all the contents of the file have been read, break.
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}   