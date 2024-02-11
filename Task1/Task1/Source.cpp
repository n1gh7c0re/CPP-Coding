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

int main(void) {
	cout << "Hello World!" << endl;
	quadratic_equation equation;
	equation.message();

	return 0;
}