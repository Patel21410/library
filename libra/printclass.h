#pragma once
#include"classheader.h"

using namespace std;
class printtoscreen {
public:
	static void printfunction(book*b,int size) {
		cout << "select operation\n 1. display all book\n 2. search book by there catogory\n";
		int chl;
		string sb;
		char ch;
		/*cin >> chl;
		switch (chl) {
		case 1:
			cout << "all details\n";
			for (int i = 0; i < size; i++) {
				b[i].display();
			}
			break;
		case 2:
			cout << "enter categoty search \n";
			cin >> sb;
			for (int i = 0; i < size; i++) {
				string z = b[i].searchbook();
				if (z == sb) {
					b[i].display();
				}

			}
			break;
		default:
			cout << "invalid input" << endl;

		}*/

		do {

			cin >> chl;
			switch (chl) {
			case 1:
				cout << "all details\n";
				for (int i = 0; i < size; i++) {
					b[i].display();
				}
				break;
			case 2:
				cout << "enter categoty search \n";
				cin >> sb;
				for (int i = 0; i < size; i++) {
					string z = b[i].searchbook();
					if (z == sb) {
						b[i].display();
					}

				}
				break;
			default:
				cout << "invalid input" << endl;

			}
			cout << "use more then press :'y' otherwise :'n' press \n";
			
			cin >> ch;
		} 
		while (ch=='y');

		


	}

};
