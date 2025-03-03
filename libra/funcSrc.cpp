#include"classheader.h"
book::book() {
	name = "na";
	cate = "na";
}
void book::display() {
	cout <<" name : " << name <<"\n category : " << cate << endl;
}
string book::searchbook() {
	return cate;
}
void book::accept() {
	cout << "Enter name :>>cate: \n";
	cin >> name >> cate;
	this->name = name;
	this->cate = cate;
}

