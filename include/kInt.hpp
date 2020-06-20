#include <cmath>
#include <vector>
using namespace std;

class kInt {
	private:
	long long cont;
	vector<int> digits;
	public:
	kInt() {
		digits.clear();
		cont = 0;
		digits.push_back(0);
	}
	kInt(int x) : cont(x) {
		digits.clear();
		int px = x;
		while (px > 0) {
			digits.push_back(px%10);
			px/=10;
		}
	}
	kInt(long long x) : cont(x) {
		digits.clear();
		long long px = x;
		while (px > 0) {
			digits.push_back(px%10);
			px/=10;
		}
	}
	kInt(kInt& x) : cont(x.cont), digits(x.digits) {}
	
	// Operators
		// Arithmatic comparing
			bool operator<(kInt& others) {
				if (cont < others.cont) return 1;
				return 0;
			}
			bool operator>(kInt& others) {
				if (cont > others.cont) return 1;
				return 0;
			}
			bool operator==(kInt& others) {
				if (cont == others.cont) return 1;
				return 0;
			}
			bool operator>=(kInt& others) {
				if (cont >= others.cont) return 1;
				return 0;
			}
			bool operator<=(kInt& others) {
				if (cont <= others.cont) return 1;
				return 0;
			}
		// Arithmatic computing
			kInt operator+(kInt& a, kInt& b) {
				return kInt(a.cont+b.cont);
			}
			kInt operator-(kInt& a, kInt& b) {
				return kInt(a.cont-b.cont);
			}
			kInt operator*(kInt& a, kInt& b) {
				return kInt(a.cont*b.cont);
			}
			kInt operator/(kInt& a, kInt& b) {
				return kInt(a.cont*b.cont);
			}
			kInt operator%(kInt& a, kInt& b) {
				return kInt(a.cont%b.cont);
			}
			kInt& operator+=(kInt& a) {
				cont += a.cont;
				return *this;
			}
			kInt& operator-=(kInt& a) {
				cont -= a.cont;
				return *this;
			}
			kInt& operator*=(kInt& a) {
				cont *= a.cont;
				return *this;
			}
			kInt& operator/=(kInt& a) {
				cont /= a.cont;
				return *this;
			}
			kInt& operator%=(kInt& a) {
				cont %= a.cont;
				return *this;
			}
		// Get the value of each digit
			kInt operator[](kInt& index) {
				if (index > kInt(digits.size()-1) || index < kInt(0)) {
					return kInt(-1);
				} else return kInt(digits[index.cont]);
			}
};
