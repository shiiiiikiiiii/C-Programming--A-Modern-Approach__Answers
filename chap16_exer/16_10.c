#include <stdbool.h>

struct point{int x, y;};
struct rectangle{struct point upper_left, lower_right;};

// q_a
int square(struct rectangle r){
    return ((r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y));
}

// q_b
struct point center(struct rectangle r){
    struct point p = {((r.lower_right.x + r.upper_left.x) / 2), ((r.lower_right.y + r.upper_left.y) / 2)};
    return p;
}

// q_c
struct rectangle move(struct rectangle r, int x, int y){
    r.upper_left.x += x;
    r.lower_right.x += x;
    r.upper_left.y += y;
    r.lower_right.y += y;

    return r;
}

// q_d
bool inside(struct point p, struct rectangle r){
    return (p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y >= r.lower_right.y && p.y <= r.upper_left.y);
}