#include<stdio.h>
struct structurePointer
{
    /* data */
    int x;
};

int main(int argc, char const *argv[])
{
    /* code */
    struct structurePointer n1;
    n1.x = 1;
    struct structurePointer *p = &n1;
    

    return 0;
}
