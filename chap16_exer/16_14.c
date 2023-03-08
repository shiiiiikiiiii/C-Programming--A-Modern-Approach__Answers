#define PI 3.14159
#define CIRCLE 0
#define RECTANGLE 1

struct point{int x, y;};

struct shape{
    int shape_kind;
    struct point center;
    union{
        struct{
            int height, width;
        } rectangle;
        struct{
            int radius;
        } circle;
    }u;
};

double compute_area(struct shape s){
    if(s.shape_kind == CIRCLE){
        return PI * s.u.circle.radius * s.u.circle.radius;
    }
    else if(s.shape_kind == RECTANGLE){
        return s.u.rectangle.height * s.u.rectangle.width;
        }
}

struct shape shift_shape(struct shape s, int x, int y){
    s.center.x += x;
    s.center.y += y;
    return s;
}

struct shape scale_shape(struct shape s, double scalefactor){
    if(s.shape_kind == CIRCLE){
        s.u.circle.radius *= scalefactor;
    }
    else if(s.shape_kind == RECTANGLE){
        s.u.rectangle.height *= scalefactor;
        s.u.rectangle.width *= scalefactor;
    }
    return s;
}