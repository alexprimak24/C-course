#include <stdio.h>
#include <stdbool.h>

int main(){ 

    // \n new line
    // \t tab   
    printf("I like pizza!\n");
    printf("It's really good\n");
    printf("\"I like pizza\" - Abraham Lincoln probably\n");

    //variables = Allocated space in memory to store the value
    //we refer to a variable's name to access the stored value.
    //That variable now behaves as if it was the value it contains
    //BUT we need to declare what type of data we are storing
    
    
    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration and initialization

    int age = 21; //integer
    float gpa = 2.05; //floating points number
    char grade = 'C'; //single character
    char name[] = "Bro"; // array of characters
    
    //s - string, d - decimal....
    printf("Hello %s\n",name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);

    char a = "C"; //single character %c
    char b[] = "Bro"; //array of characters %s

    float c = 3.141592; //4 bytes (32 bits of precision) 6 - 7 digits %f
    //double d = 3.141592653589739 //8 bytes (64 bits of precision) 15 - 16 digits %lf

    //bool e = true; //1 bytes (true or false) %d

    //char f = 100; //1 byte (-128 to +127) %d or %c
    //unsigned char g = 255; //1 byte (0 to +255) %d or %c

    //In case of overflow we are back to minimal value -32.768 in our case
    // short int h = 32767; //2 bytes (-32.768 to +32.767) %d
    //unsigned short int i = 65535; //2 bytes (0 to +65.535) %d
    //short h = 32767 - usually just write it that way
    
    //for int there is no decimal portion
    //actually the whole declaration is: long int j = 21.......
    int j = 2147483647; //4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L; //4 bytes (0 to +4,294.967,295) %u

    long long int l = 922333323424234; //8 bytes (-9 quintillion to +9 quintillion)
    unsigned long long int m = 184423423423; //8 bytes (0 to +18 quintillion)

    return 0;

    
    
}