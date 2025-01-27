// ⦁	Demonstrate the differences among getch(), getche(), getchar().

#include <stdio.h>
#include <conio.h> // Required for getch() and getche()

int main()
{
    char ch1, ch2, ch3;

    // Demonstrating getch()
    printf("Enter a character using getch(): ");
    ch1 = getch();
    printf("\nCharacter entered using getch(): %c\n", ch1);

    // Demonstrating getche()
    printf("Enter a character using getche(): ");
    ch2 = getche();
    printf("\nCharacter entered using getche(): %c\n", ch2);

    // Demonstrating getchar()
    printf("Enter a character using getchar(): ");
    ch3 = getchar();
    printf("Character entered using getchar(): %c\n", ch3);
    printf("\n --[Your Name]--");
    return 0;
}
