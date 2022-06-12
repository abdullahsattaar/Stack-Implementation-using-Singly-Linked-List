# Stack-Implementation-using-Singly-Linked-List
C++ code Implementation a template-based stack using a singly linked list. Extra Global Functions: 1)StringReverse() 2)IsBalanced()

1.	Implement a template-based stack using a singly linked list. The required member methods are:

int size(): returns the count of total element stored in the stack.
bool isEmpty(): returns true if the stack is empty else false.
bool top(T&):  returns, but does not delete, the topmost element from the stack via the parameter passed by reference. It returns false via a return statement if there is no element in the stack, else it returns true and assigns the top most element to the parameter passed by reference.
void pop(): deletes the top most element from the stack. If there is no element, return some error.
push(T const& e): pushes the element “e” on top of the stack.

Application of Stack 

Write following methods in your main function
2.	Given an expression containing opening and closing braces, brackets, and parentheses; implement a function “isBalanced” to check whether the given expression is a balanced expression or not, using your stack implementation. For example, {[{}{}]}[()], {{}{}}, and []{}() are balanced expressions, but {()}[) and {(}) are not balanced. In your main function test your function using the given examples.  bool isBalanced(string exp)

3.	Implement a function reverse which reverses the given string using your stack data structure.  string reverse(string const);

