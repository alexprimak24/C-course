#include <stdio.h>
#include <string.h>

void getInput(char *question, char *inputBuffer, int bufferLength)
{
    printf("%s  (Max %d characters)\n", question, bufferLength - 1);
    fgets(inputBuffer, bufferLength, stdin);

    if (inputBuffer[strlen(inputBuffer) -1] != '\n')
    {
        int dropped = 0;
        while (fgetc(stdin) != '\n')
            dropped++;

        if (dropped > 0) // if they input exactly (bufferLength - 1) 
                         // characters, there's only the \n to chop off
        {
            printf("Woah there partner, your input was over the limit by %d characters, try again!\n", dropped );
            getInput(question, inputBuffer, bufferLength);
        }
    }
    else
    {
        inputBuffer[strlen(inputBuffer) -1] = '\0';      
    }
}

int main()
{
    char firstAnswer[10];
    getInput("Go ahead and enter some stuff:", firstAnswer, 10);
    printf("Okay, I got: %s\n",firstAnswer);

}
