#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

// the functions' logic had been written assuming that the top left corner is the origin axis

int area(struct rectangle r);
struct point center(struct rectangle r);
struct rectangle move(struct rectangle r, int x, int y);
bool is_in_rectangle(struct rectangle r, struct point p);


int area (struct rectangle r) {
    return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}


struct point center(struct rectangle r) {
    struct point c =  {
        (int) (r.lower_right.x - r.upper_left.x) / 2,
        (int) (r.lower_right.y - r.upper_left.y) / 2,
    };

    return c;
}

struct rectangle move(struct rectangle r, int x, int y) {
    struct rectangle new_r = {
        {r.upper_left.x + x, r.upper_left.y},
        {r.lower_right.x + x, r.lower_right.y + y}
    };

    return new_r;
}


bool is_in_rectangle(struct rectangle r, struct point p) {
    return r.upper_left.x < p.x && r.upper_left.y < p.y && r.lower_right.x > p.x && r.lower_right.y > p.y;
}
