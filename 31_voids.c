/*
    * Function Return Type: Use void as the return type when a function does not need to return a value. This means it does not return data types like arrays, strings, etc.

     Example: A function that performs an action but does not produce a result to be used by the caller.

        void printHello() 
        {
        printf("Hello, World!\n");
        }


    * Function Parameter List: Use void in the parameter list to indicate that a function takes no arguments.

     Example: 

        void printHello(void) 
        {
        printf("Hello, World!\n");
        }


    * When to Use Other Return Types: Use other return types when a function needs to return a value to the caller.

     Example: A function that calculates the sum of two integers and returns the result.

        int sum(int a, int b) 
        {
        return a + b;
        }

     Example: A function that checks if a number is even and returns a boolean value.

        bool isEven(int number) 
        {
        return (number % 2 == 0);
        }
*/