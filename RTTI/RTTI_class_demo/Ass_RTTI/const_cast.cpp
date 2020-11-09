#include <iostream> 
using namespace std;

class Book
{
private:
	int id;
public:
	// constructor 
	Book(int r) :id(r) {}

	// A const function that changes book Id with the help of const_cast 
	void fun() const
	{
		(const_cast<Book*>(this))->id = 40;
	}
	int getId() { return id; }
};

int main(void)
{
	Book b(3);
	cout << "Old roll number: " << b.getId() << endl;

	b.fun();

	cout << "New roll number: " << b.getId() << endl;

	return 0;
}