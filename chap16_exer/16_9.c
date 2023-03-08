#include <stdbool.h>

struct color{
    int red;
    int green;
    int blue;
};

// q_a
struct color make_color(int red, int green, int blue){
    struct color c;
    c.red = red;
    c.green = green;
    c.blue = blue;

    return c;
}


// q_b
int get_red(struct color c){
    return c.red;
}


// q_c
bool equal_color(struct color color1, struct color color2){
    return (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue);
}

// q_d
struct color brighter(struct color c){
    if(c.red == 0 && c.green == 0 && c.blue == 0 ){
        c.red = 3;
        c.green = 3;
        c.blue = 3;
        return c;
    }

    if(c.red > 0 && c.red < 3){
        c.red = 3;
    }
    else if(c.green > 0 && c.green < 3){
        c.green = 3;
    }
    else if(c.blue > 0 && c.blue < 3){
        c.blue = 3;
    }

    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;

    if(c.red > 255){
        c.red = 255;
    }
    else if(c.green > 255){
        c.green = 255;
    }
    else if(c.blue > 255){
        c.blue = 255;
    }

    return c;
}

// q_e
struct color darker(struct color c){
    c.red *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;
    
    return c;
}