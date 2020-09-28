#include "Sort.h"



Sort::Sort(int max)
{
	m_size = max;
	
	m_student = new STUDENT[max];
}

Sort::~Sort()
{
	delete m_student;
}

void Sort::initdata(STUDENT* stu)
{
	for (int i = 0; i < m_size; i++) {
		m_student[i] = stu[i];
	}
}

void Sort::sorting()
{
	int size = getSize();
	STUDENT* data = getData();

	int Largest = 0;
	for (int Last = size - 1; Last >= 1; --Last) {
		int Largest = 0;
		for (int Current = 1; Current <= Last; Current++) {
			if (data[Current].Grade > data[Largest].Grade)
				Largest = Current;
		}
		STUDENT temp = data[Last];
		data[Last] = data[Largest];
		data[Largest] = temp;

	}
}
