#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

//A C program that creates beep sounds
int main()
{

    printf("\nA program that creates beeping sounds.\n");
    //Initializing the frequency and duration of the beep
    float frequency;
    float duration;
    printf("Enter the frequency of the beep: ");
    scanf("%i", &frequency);
    printf("Enter the duration of the beep: ");
    scanf("%i", &duration);

    while (getch() != 27)
        //27 == ESC Key
    Beep(frequency, duration);
    printf("\a");
    return 0;
}
