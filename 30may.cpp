// 30_may.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "group.h"
#include "student.h"
using namespace std;
int main()
{
	group grp;
	student first("Name surname", "hbjsfhbfsksf");
	grp.add(first);
	
	
	std::cout << grp << std::endl;
	std::cout << "---------------------" << std::endl;

	grp.remove(first);
	std::cout << grp << std::endl;
}


