# include <stdio.h>

//everytime there is a char to int conversion, it always turns into ascii value
//the program treats the initialized char as a symbol
int main() {
    char character1;
    char character2;
    int integer1;
    double double1;
//converting char A to int 
    character1 = 'A';
    character1 = (int)character1;
    printf("%i\n", character1);
    //outputs 65
    //turns char A into an int

//converting char 8 to int
    character2 = '8';
    character2 = (int)character2;
    printf("%i\n", character2);
    //outputs 56
    //converts the integer to ascii value

//converting int 8 to char
    integer1 = 65;
    integer1 = (char)integer1;
    printf("%c\n", integer1);
    //outputs A
    //converts the ascii value to ascii symbol

//converting double to char
    double1 = 55.67;
    double1 = (char)double1;
    printf("%c\n", double1);
  
    return 0;
}
