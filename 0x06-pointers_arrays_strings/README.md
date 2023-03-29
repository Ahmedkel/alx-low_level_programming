8. rot13


Write a function that encodes a string using rot13.


Prototype: char *rot13(char *);

You can only use if statement once in your code

You can only use two loops in your code

You are not allowed to use switch

You are not allowed to use any ternary operation


9. Numbers have life; they're not just symbols on paper


Write a function that prints an integer.


Prototype: void print_number(int n);

You can only use _putchar function to print

You are not allowed to use long

You are not allowed to use arrays or pointers

You are not allowed to hard-code special values


10. A dream doesn't become reality through magic; it takes sweat, determination and hard work


Add one line to this code, so that the program prints a[2] = 98, followed by a new line.


You are not allowed to use the variable a in your new line of code

You are not allowed to modify the variable p

You can only write one statement

You are not allowed to use ,

    You are not allowed to code anything else than the line of expected line of code at the expected line

    Your code should be written at line 19, before the ;

    Do not remove anything from the initial code (not even the comments)

        and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)

        You are allowed to use the standard library


        11. It is the addition of strangeness to beauty that constitutes the romantic character in art


        Write a function that adds two numbers.


        Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);

        Where n1 and n2 are the two numbers

        r is the buffer that the function will use to store the result

        size_r is the buffer size

        The function returns a pointer to the result

        You can assume that you will always get positive numbers, or 0

        You can assume that there will be only digits in the strings n1 and n2

        n1 and n2 will never be empty

        If the result can not be stored in r the function must return 0


        12. Noise is a buffer, more effective than cubicles or booth walls


        Write a function that prints a buffer.


        Prototype: void print_buffer(char *b, int size);

        The function must print the content of size bytes of the buffer pointed by b

        The output should print 10 bytes per line

        Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0

        Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space

        Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .

        Each line ends with a new line \n

        If size is 0 or less, the output should be a new line only \n

        You are allowed to use the standard library

        The output should look like the following example, and formatted exactly the same way


