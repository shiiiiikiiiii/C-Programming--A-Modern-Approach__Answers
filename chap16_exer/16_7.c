struct fraction{
    int numerator;
    int denominator;
};

int measure(int x, int y){	
	int z = y;
	while(x % y != 0){
		z = x % y;
		x = y;
		y = z;	
	}
	return z;
}

// q_a
struct fraction simplification(struct fraction f){
	int m = measure(f.numerator, f.denominator);
	f.numerator /= m;
	f.denominator /= m;
	return f;
}

// q_b
struct fraction plus(struct fraction f1, struct fraction f2){
	int tmp = f1.denominator;
	f1.numerator *= f2.denominator;
	f1.denominator *= f2.denominator;
	f2.numerator *= tmp;

	f1.numerator += f2.numerator;

	return (simplification(f1));
}

// q_c
struct fraction minus(struct fraction f1, struct fraction f2){
	int tmp = f1.denominator;
	f1.numerator *= f2.denominator;
	f1.denominator *= f2.denominator;
	f2.numerator *= tmp;

	f1.numerator -= f2.numerator;

	return (simplification(f1));
}

// q_d
struct fraction miltiply(struct fraction f1, struct fraction f2){
	f1.numerator *= f2.numerator;
	f1.denominator *= f2.denominator;

	return (simplification(f1));
}

// q_e
struct fraction divide(struct fraction f1, struct fraction f2){
	f1.numerator *= f2.denominator;
	f1.denominator *= f2.numerator;

	return (simplification(f1));
}