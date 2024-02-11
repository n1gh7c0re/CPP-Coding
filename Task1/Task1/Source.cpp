#include <iostream>
#include <cmath>

using namespace std;

class quadratic_equation {
	friend void solve_equation(quadratic_equation);
private:
	int a, b, c;
public:
	quadratic_equation() {
		cout << "Enter integer coefficients of quadratic equation by spaces: ";
		cin >> a >> b >> c;
	}

	void set(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void message() const {
		cout << "You entered: A = " << a << ", B = " << b << ", C = " << c << endl;
		if (a == 0) { //checking correctness
			cout << "It isn't a quadratic equation" << endl;
			exit(-1);
		}
	}
};

void solve_equation(quadratic_equation equation) {
	double const D = equation.b * equation.b - 4 * equation.a * equation.c;
	if (D > 0) {
		double x1 = (-equation.b + sqrt(D)) / (2 * equation.a);
		double x2 = (-equation.b - sqrt(D)) / (2 * equation.a);
		cout << "Firsr root: " << x1 << ", Second root: " << x2 << endl;
	}
	else if (!D) {
		double x = -equation.b / (2 * equation.a);
		cout << "Single root: " << x << endl;
	}
	else cout << "Quadratic equation has no roots" << endl;
}

int main(void) {
	while (1) {
		quadratic_equation equation;
		equation.message();

		solve_equation(equation);
	}

	return 0;
}