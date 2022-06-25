#include <iostream>
#include <stack>
using namespace std;

int main() {

	
	stack<string> colors;

	
	colors.push("Roja");
	colors.push("Negra");
	colors.push("Azul");

	string top = colors.top();

	cout << "Top elemento: " << top;

	return 0;
}