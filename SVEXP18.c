#include <stdio.h>

int main() {

    int verticalSize, horizontalSize;


    printf("Enter the size of table vertically: ");
    scanf("%d", &verticalSize);

    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontalSize);


    printf("\nMultiplication Table (%d x %d):\n", verticalSize, horizontalSize);

    for (int i = 1; i <= verticalSize; i++) {

        for (int j = 1; j <= horizontalSize; j++) {


            printf("%d\t", i * j);
        }


        printf("\n");
    }

    return 0;
}
