#include <stdio.h>
struct nodeTwo
{
    /* data */
    int x, y;
};

int main(int argc, char const *argv[])
{
    /* code */
    struct nodeTwo array[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        array[i].x = i;
        array[i].y = i;
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d is x of the node and %d is the y of the node\n", array[i].x, array[i].y);
    }

    return 0;
}
