#pragma once
#include <string>
class Node
{
public:
	std::string data;
	char* Next;	//указатель на след элем
	char* down; //указатель на элемент в вышенаходящемся разделе
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

