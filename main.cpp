#include "classes.h"

int main()
{
    Student student(
        "Kovalenko Ivan Vasylovych", "2000-05-15", "+123456789",
        "Kyiv", "Ukraine",
        "National University", "Kyiv", "Ukraine", 15.5);
	//File operations
	ofstream file("student.txt");
	if (file.is_open())
	{
		file << "Full Name: " << student.getSNP() << endl;
		file << "Birth Date: " << student.getBDate() << endl;
		file << "Phone: " << student.getPhone() << endl;
		file << "City: " << student.getCity() << ", Country: " << student.getCountry() << endl;
		file << "Institute: " << student.getIName() << " (" << student.getICity() << ", " << student.getICountry() << ")" << endl;
		file << "Group Number: " << student.getGNumber() << endl;
		cout << "File has been successfully created!" << endl;
	}
	else
	{
		cout << "Error... File has not been created!" << endl;
	}
	file.close();
	return 0;
}