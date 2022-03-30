# include <stdio.h>

//everytime there is a char to int conversion, it always turns into ascii value
int main() {
    char character1;
    char character2;
    int integer1;
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
    //converts to ascii value to 
//converting int 8 to char
    integer1 = 8;

    return 0;

  
}
