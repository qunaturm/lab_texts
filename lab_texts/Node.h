#pragma once
#include <string>
class Node
{
public:
	std::string data;
	char* Next;	//��������� �� ���� ����
	char* down; //��������� �� ������� � ��������������� �������
	int level;

	Node()
	{

	}
};

class MyList
{
private:
	Node* First;
	Node* End;

public:
	void Push_back(std::string data, int lvl)
	{

	}

	void Pop_back()
	{

	}

	void Displsy()
	{

	}

	~MyList()
	{

	}
};

