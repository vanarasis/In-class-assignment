#include <iostream>
#include <stack>
//small changes
using namespace std;
int main()
{
	  // this is a stack program 
	stack<int> stack;
	stack.push(21);
	// The values pushed in the stack should be of thesame data which is written during declaration of stack
	stack.push(22);
	stack.push(24);
	stack.push(25);
	int num = 0;
	stack.push(num);
	stack.pop();
	stack.pop();
	stack.pop();
	while (!stack.empty()) {
		cout << stack.top() << " "; stack.pop();
	}
}