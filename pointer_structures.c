#include <stdio.h>

// structure pointer

struct point {
    int x, y;
};

int main()
{
    struct point str = {1, 2};

    struct point* ptr = &str;
    
    printf("%d %d", ptr->x, ptr->y);

    return 0;
}