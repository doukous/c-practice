#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int main(void) {
    struct rectangle *p = malloc(sizeof(struct rectangle));

    if (p == NULL) {
        puts("allocation failed.");
        exit(EXIT_FAILURE);
    }

    struct point pul = {10, 25};
    struct point plr = {20, 15};

    p->upper_left = pul;
    p->lower_right = plr;

    printf(
        "rectangle, upper left: (%d, %d), lower right: (%d, %d)\n",
        p->upper_left.x, p->upper_left.y, p->lower_right.x, p->lower_right.y
    );
}
