#include <stdio.h>
#include <stdlib.h>
#include "array.h"


void menu() {
    printf("(1) - Input Values\n");
    printf("(2) - Delete Values\n");
    printf("(3) - Print Array\n");
    printf("(4) - Find Maximum Value\n");
    printf("(5) - Find Minimum Value\n");
    printf("(6) - Calculate Average\n");
    printf("(9) - EXIT!!!\n");
}

int main() {

    int *array = NULL;
    int option = 0;
    int SIZE = 0;


    while(option!=9) {
        menu();
        printf("Choice the operation you want to do:\n");
        scanf("%i", &option);

        switch(option){
            case 1 : {
                array = enterValue(array, &SIZE);
                break;
            }
            case 2 : {
                deleteValues(array,&SIZE);
                break;
            }
            case 3 : {
                printArray(array, SIZE);
                break;
            }
            case 4 : {
                printf("Maximum value = %d\n", findMaximumValue(array, SIZE));
                break;
            }
            case 5 : {
                printf("Minimum value = %d\n", findMinimumValue(array, SIZE));
                break;
            }
            case 6: {
                printf("Average value = %f\n", calculateAverage(array, SIZE));
                break;
            }
            case 9 : {
                break;
            }
        }
    }

    free(array);
}