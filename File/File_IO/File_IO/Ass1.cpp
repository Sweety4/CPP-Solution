#include <fstream>
#include <iostream>
using namespace std;
#include<iostream>
using namespace std;

class Student {
	int roll;
	char name[20];

public:
	void Add();
	void Display();
	void Delete(int);
	void getdata();
	void update(int);
	void testcase1();
	void testcase2();
	void putdata();
};

void Student::getdata()
{
	cout << "\n\n\ Enter Roll no and Name ";
	cin >> roll >> name;
}
void Student::update(int rno)
{
	fstream fs("student.dat", ios::binary|ios::in|ios::out);
	int pos, flag = 0;

	while (!fs.eof())
	{
		pos = fs.tellg();
		fs.read((char*)this, sizeof(Student));
		if (rno == roll) 
		{
				flag = 1;
				getdata();
				// placing the put(writing) pointer 
				// at the starting of the  record 
				fs.seekp(pos);
				// writing the object to the file 
				fs.write((char*)this, sizeof(Student));

				break;
			}
		
	}
	fs.close();

	if (flag == 1)
		cout << "\nrecord successfully modified \n";
	else
		cout << "\nrecord not found \n";
}
void Student::putdata()
{
	cout << "\n\n\t" << roll << "\t" << name;
}
void Student::Delete(int rno)
{

	int pos, flag = 0;

	ifstream ifs;
	ifs.open("student.dat", ios::in | ios::binary);

	ofstream ofs;
	ofs.open("temp.dat", ios::out | ios::binary);

	while (!ifs.eof())
	{

		ifs.read((char*)this, sizeof(Student));
			// comparing the roll no with 
			// roll no of record to be deleted 
			if (rno == roll) 
			{
				flag = 1;
				cout << "The deleted record is \n";
				putdata();
			}
			else {
				// copy the record of "student" file to "temp" file 
				ofs.write((char*)this, sizeof(Student));
			}
		
	}

	ofs.close();
	ifs.close();

	// delete the old file 
	remove("student.dat");

	// rename new file to the older file 
	rename("temp.dat", "student.dat");

	if (flag == 1)
		cout << "\nrecord successfully deleted \n";
	else
		cout << "\nrecord not found \n";
}


void Student::Add()
{
	ofstream fout("student.dat", ios::binary | ios::app);
	cout << "\n\n\t Enter Roll No and Name ";
	cin >> roll >> name;
	fout.write((char*)this, sizeof(Student));
	fout.close();
}
void Student::Display()
{
	ifstream fin("student.dat", ios::binary);

	while (fin)
	{
		if (fin)
		{

			fin.read((char*)this, sizeof(Student));
			cout << "\n\t" << roll << "\t" << name;
		}
	}
	fin.close();
}

void main()
{
	Student s;
	int ch,no;
	do
	{
		cout << "\n\n\t 1. Add\
			     \n\t 2. Display\
                 \n\t 3. Modify \
                \n\t 4. Delete\
                  \n\t 0. Exit\
				\n\nEnter Your chocie ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			s.Add();
			break;
		case 2:
			s.Display();
			break;
		case 3:
			cout << "\n\n\t enter Roll no TO Modify ";
			cin >> no;
			s.update(no);
		case 4:
			cout << "\n\n\t enter Roll no TO Modify ";
			cin >> no;
			s.Delete(no);

		}
	} while (ch != 0);
	cout << "\n\n\n";
}
