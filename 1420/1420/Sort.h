#pragma once
#include"Student.h"
class Sort
{
public:
	int m_size;
	STUDENT* m_student;

public:
	Sort(int max);
	~Sort();


	int getSize() { return m_size; };
	STUDENT* getData() { return m_student; }

	void initdata(STUDENT* stu);
	void sorting();
	

};

