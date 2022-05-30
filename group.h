#pragma once
#include<iostream>
#include<vector>
#include "student.h"

class group
{
	std::vector<student> students;
public:
	void add(student st);
	void remove(student st);
	friend std::ostream& operator<<(std::ostream& os, const group gr);
};
