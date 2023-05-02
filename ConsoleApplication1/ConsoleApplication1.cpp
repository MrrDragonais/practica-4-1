#include <iostream>
class Pen {
public:
	std::string color;
};
int main() {
	using namespace std;
	cout << "Test v1.01:OK.\n" << endl;
	Pen pen;
	pen.color = "#FFFFFF";
	cout << "pen.color = " << pen.color << endl;
	return 0;
}
