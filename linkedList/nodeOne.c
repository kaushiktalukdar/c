#include <stdio.h>
struct holder
{
    /* data */
    int x, y;
};

int main(int argc, char const *argv[])
{
    /* code */
    struct holder node;
    node.x = 1;
    node.y = 2;
    printf("%d is x of the node and %d is the y of the node", node.x, node.y);
    return 0;
}
