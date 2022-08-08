#include <iostream>
using namespace std;

//memset, memcpy 중요
class Stack
{
protected:
	int m_size;
	int m_top;
	int* m_buffer;

public:
	int Getsize();
	int Gettop();
	void Initialiae(int size = 10);
	void RemoveAll();
	void PrintAll();
	bool Push(int value);
	bool Pop(int& value);
	bool Setsize(int size);
	bool Getdata(int index, int& data);

};

void Stack::Initialiae(int size)
{
	m_size = size;
	m_top = -1;
	m_buffer = new int[m_size];//input 정수만큼 배열 할당
	memset(m_buffer, 0, sizeof(int) * m_size);//
}

void Stack::RemoveAll()
{
	m_size = 0;
	m_top = -1;
	delete m_buffer;
	m_buffer = NULL;
}

void Stack::PrintAll()
{
	int i = 0;
	for ( i = 0; i < m_size; i++)
	{
		printf("stack 요소 %d번째 값 : %d \n", i+1, m_buffer[i]);
	}
}

bool Stack::Setsize(int size)
{
	if (size < m_size )	return false;
	int* tmp = m_buffer;
	m_size = size;
	m_buffer = new int[m_size];
	memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
	delete[]tmp;
	return true;
}

bool Stack::Getdata(int index,int& data)
{
	if (index < 0||index>m_top)	return false;
	data = m_buffer[index];//* (m_buffer + index)
	return true;
}

int Stack::Getsize()
{
	return m_size;
}

int Stack::Gettop()
{
	return m_top;
}

bool Stack::Push(int value)
{
	if (m_top >= m_size - 1)	return false;
	m_buffer[++m_top] = value;//계산후 idx
	return true;
}

bool Stack::Pop(int& value)
{
	if (m_top < 0)	return false;
	value = m_buffer[m_top--];
	return true;
}

int main()
{
	Stack stack;
	stack.Initialiae(5);

	stack.Push(5);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.PrintAll();
	printf("Top idx : %d \n", stack.Gettop());

	int data;
	printf("Pop data : %d \n",stack.Pop(data));
	stack.PrintAll();
	return 0;
}