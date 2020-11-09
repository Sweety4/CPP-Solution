#include"Source.cpp"
void main()
{
	cArray<int> a(10);
	a.Accept();
	cout << "\n\n\t  ************ Array Is **********\n\n";
	cout << a;
	cout << "\n\n\t ********** Reverse Array ********** \n\n";
	a.Reverse();
	a.Display();
	
	cout << "\n\n\t ********** Sort Array ********** \n\n";
	a.Sort();
	a.Display();
	cArray<int> a1;
	cout << "\n\n\t ********** Copy Array ********** \n\n";

	a1.Copy(a);
	a1.Display();

	cout << "\n\n\n";


}