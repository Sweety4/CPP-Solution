#include <iostream>
#include <string>
using namespace std;

class Window
{
private:
	string name;
public:
	Window() {}
	Window(const string s) :name(s)
	{
	};
	virtual ~Window()
	{
	};
	void getName()
	{
		cout << name << endl;
	};
};

class ScrollWindow : public Window
{
public:
	ScrollWindow(string s) : Window(s)
	{
	};
	~ScrollWindow()
	{
	};
	void scroll()
	{
		cout << "scroll()" << endl;
	};
};

void DoSomething(Window *w)
{
	w->getName();

	dynamic_cast<ScrollWindow*>(w)->scroll();

	ScrollWindow *sw = dynamic_cast<ScrollWindow*>(w);

	// if not null, it's a scroll window object
	if (sw)

		sw->scroll();
}

int main()
{
	Window *w = new Window("plain window");
	ScrollWindow *sw = new ScrollWindow("scroll window");

	DoSomething(w);
	DoSomething(sw);

	return 0;
}
