#include"Student.h"

istream& operator >> (istream & is, Students& s) {
	is >> s.name >> s.surname;
	return is;
}

ostream& operator<<(ostream& os, Students s) {
	os << s.name <<"\t" <<s.surname<<endl;
	return os;
}