//1
#include <stdio.h>

int main()
{
    char letter1, letter2, letter3;

    printf("Enter the first letter: ");
    scanf("%s", &letter1);

    printf("Enter the second letter: ");
    scanf(" %s", &letter2);

    printf("Enter the third letter: ");
    scanf(" %s", &letter3);
    
    printf("%c %c %c", letter3, letter2, letter1);
    return 0;
}


//2
#include <stdio.h>

int main() {
    int length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    int perimeter = 2 * (length + width);
    int area = length * width;

    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d\n", area);

    return 0;
}


//3
