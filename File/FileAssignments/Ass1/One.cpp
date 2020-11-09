#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("MyFile");
	for (int i = 65; i <= 91; i++)
		out.put((char)i);
	out.close();
	ifstream in("MyFile");
	char ch;
	while (in)
	{
		in.get(ch);
		if (in)
			cout << ch;
	}
	in.close();
	return 0;
}
 