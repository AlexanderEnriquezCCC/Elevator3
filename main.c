#include <stdio.h>

//helped by Haley of the IAM department
int main()
{
    int *whileLoop = (int *)malloc(sizeof(int));
    whileLoop[3] = 1;
    int floorOn = 0;
    int floorsMoved = 0;
    int floorTo = 0;

    printf("Welcome! You are on floor %d.\n", floorOn);
    printf("Please select what floor you would like to be on (0-10).");
    
    //scanf() brings up an error that I'm not sure is actually an error. The error suggestion says to use _CRT_SECURE_NO_WARNINGS which seems to be just more of a way to ignore the error, which I don't think you want.
    //did not fix printf /W4 error
    do
    {

        scanf("%d", &floorTo);
        if (0 <= floorTo && floorTo <= 10)
        {
            if(floorTo > floorOn)
            {
                floorsMoved = floorTo-floorOn;
                for(int i = floorOn; i < floorTo; i++)
                {
                    printf("moving %d\n", i);
                }
            }

        else if(floorTo<floorOn)
        {
            floorsMoved = floorOn-floorTo;
            for(int i = floorOn; i > floorTo; i--)
            { //change this going down
                printf("moving %d\n", i);
            }
        }
            floorOn = floorTo;
            printf("You have moved to floor %d, and have moved %d floors.\n", floorOn, floorsMoved);
        }
        else
        {
            printf("That is not a valid floor");
        }
    }while(whileLoop[3] == 1);
    free(whileLoop);
    whileLoop = NULL;
}