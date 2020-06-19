#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class kInt {
	private:
		string content = "";
	public:
		kInt(int x) : content (stringstream(x).str()) {}
		kInt(string x) : content(x) {}
		kInt(const char* x) : content(string(x)) {}
	
};
