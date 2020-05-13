#include <stdio.h>

int printout(char a[100], char b[100])
{

    printf("Move %s to %s.\n", a, b);

    return 0;

}

int move(int rings, char f[], char h[], char t[])
{

    if (rings == 0)
    {

        return 0;

    } else
    {

        move(rings - 1, f, t, h);

        printout(f, t);

        move(rings -1, h, f, t);

    }

    return 0;

}

int main()
{

    int rings = 3;
    char a[100];
    char b[100];
    char c[100];

    printf("Enter the name of the first post: \a");
    scanf("%s", a);

    printf("Enter the name of the second post: \a");
    scanf("%s", b);

    printf("Enter the name of the third post: \a");
    scanf("%s", c);

    move(rings, a, b, c);

    return 0;

}
