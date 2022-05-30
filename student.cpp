#include "student.h"

student::student(const char* nm, const char* sn)
{
	name = nm;
	surname = sn;
}

std::string student::get_name()
{
	return name;
}

std::string student::get_surname()
{
	return surname;
}

bool student::equal(const student st)
{
	return name == st.name && surname == st.surname;
}

std::ostream& operator<<(std::ostream& os, const student& st)
{
	os << "<" << st.name << "> - <" << st.surname << ">";
	return os;
}
