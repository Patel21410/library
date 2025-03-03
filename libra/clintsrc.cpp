#include"classheader.h"
#include"printclass.h"

int main() {
	int size;
	cout << "Enter number of book\n";
	cin >> size;
	book* b = new book[size];

	for (int i = 0; i < size; i++) {
		b[i].accept();
	}
	printtoscreen::printfunction(b, size);

	
}
