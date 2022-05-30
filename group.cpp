#include "group.h"
#include<vector>

void group::add(student st)
{
	students.push_back(st);
}

void group::remove(student st)
{
	auto size = students.size();
	std::vector<student> vs;
	for (auto i = 0; i < size; i++)
		if (!students[i].equal(st))
			vs.push_back(students[i]);
	students = vs;
}

std::ostream& operator<<(std::ostream& os, const group gr)
{
	auto size = gr.students.size();
	for (auto i = 0; i < size; i++)
		os << gr.students[i] << std::endl;
	return os;
}
