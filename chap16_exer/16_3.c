// q_a
struct complex{
    double real;
    double imaginary;
};

// q_b: struct complex c1, c2, c3;

// q_c
struct complex make_complex(double real, double complex){
    struct complex madeComplex = {real, complex};
    return madeComplex;
}

//q_d
struct complex add_complex(struct complex c1, struct complex c2){
    c1.real = c1.real + c2.real;
    c1.imaginary = c1.imaginary + c2.imaginary;
    return c1;
}