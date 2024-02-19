#include <iostream>
#include <cmath>

using namespace std;

class quadratic_equation {
private:
	double a, b, c;
	double roots[2];
	int size;
public:
	quadratic_equation() {
		cout << "Enter coefficients of quadratic equation by spaces: ";
		cin >> a >> b >> c;
	}

	void set(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void message() {
		cout << "You entered: A = " << a << ", B = " << b << ", C = " << c << endl;
		if (a == 0.0) { //checking correctness
			cout << "It isn't a quadratic equation" << endl;
			exit(-1);
		}
	}

	void print_roots() {
		cout << "Roots: ";
		for (int i = 0; i < size; i++) {
			cout << roots[i] << " ";
		}
		cout << endl;
	}

	void solve_equation() {
		double const D = b * b - 4 * a * c;
		if (D > 0.0) {
			roots[0] = (-b + sqrt(D)) / (2 * a);
			roots[1] = (-b - sqrt(D)) / (2 * a);
			size = 2;
		}
		else if (D == 0.0) {
			roots[0] = -b / (2 * a);
			size = 1;
		}
		else cout << "Quadratic equation has no roots" << endl;
	}
};


int main(void) {
	while (1) {
		quadratic_equation equation;
		equation.message();

		equation.solve_equation();
		equation.print_roots();
	}

	return 0;
}