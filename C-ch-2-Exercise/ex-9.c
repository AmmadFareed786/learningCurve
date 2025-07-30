#include <stdio.h>
int main()
{
    char character1, character2;
    int num_of_step;
    printf("Enter character : \t");
    scanf("%c", &character1);
    printf("Enter steps : \t\t");
    scanf("%d", &num_of_step);
    character2 = character1 + num_of_step;
    character2 = ((character1 - 'a' + num_of_step) % 26) + 'a';
    printf("New character : \t%c\n", character2);
    return 0;
}