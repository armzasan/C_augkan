#include <stdio.h>

struct point
{
    int x, y;
};

int main()
{
    struct point origin = {30, 20};
    struct point *pp;
    pp = &origin;

    printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);

    return 0;
}
