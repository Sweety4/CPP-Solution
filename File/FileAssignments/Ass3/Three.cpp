#include<fstream>
#include "Student.h"
int main()
{
	ifstream in("student.dat", ios::in | ios::binary);
	cStudent S1;
	int recNo;
	long noRec, offBytes;

	if (!in)
	{
		cout << "Error Opening File...";
		exit(1);
	}
	in.seekg(0, ios::end);
	noRec = in.tellg() / sizeof(cStudent);
	cout << noRec;
	cout << "Enter the record no.";
	cin >> recNo;
	if (recNo > 0 && recNo <= noRec)
	{
		offBytes = sizeof(cStudent)*(recNo - 1);
		in.seekg(offBytes, ios::beg);
		in.read((char*)&S1, sizeof(cStudent));
		S1.display();
	}
	in.close();
	return 0;
}
