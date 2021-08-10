#include <stdio.h>
#include <cs50.h>

int main(void){
    int height;
    do
    {
    height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
// a for loop, by which one equals rows and another equals columns
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = height-1; j > i; j--)
        {
            printf(" ");
        }
        // print #s
        for (int j = 0; j<= i; j++)
        {
            printf("#");
        }
            printf("\n");
    }

}