#pragma once
#include <cassert>
#include <string>
class Node
{
public:
	std::string data;
	Node* Next;	//указатель на след элем
	Node* down; //указатель на элемент в вышенаходящемся разделе
	int level;

	Node(std::string d) : data(d)
	{
		assert(d != "\0");
		Next = NULL;
		down = NULL;
	}
	Node(Node &tmp)
	{
		data = tmp.data;
		Next = tmp.Next;
		level = tmp.level;
		data = tmp.data;
	}
};

class MyList
{
private:
	Node* First;
	Node* End;

	Node* searchLastRight(Node* current)
	{
		if (current->Next == nullptr)
			return current;

		Node* tmp = new Node(*current);
		while (tmp->Next != nullptr)
		{
			tmp = tmp->Next;
		}
		return tmp;
	}

	Node* searchLastLast(Node* current)
	{
		Node* tmp = searchLastRight(current);
		if (tmp->down == nullptr) return tmp;
		return searchLastLast(tmp->down);
	}



public:
	void Push_back_current_level(std::string data)
	{
		if (First = NULL)
		{
			auto sym = new Node(data);
			First = sym;
			End = sym;
			First->Next = NULL;
		}
		else
		{
			auto sym = new Node(data);
			sym->level = End->level;
			End->Next = sym;
			End = End->Next;
		}
	}

	void Push_back_next_level(std::string data)
	{
		if (First == NULL)
		{
			throw "you are dumn jopa!!!!!!!";
		}
		else
		{
			auto sym = new Node(data);
			sym->level = (End->level + 1);
			End->Next = sym;
			End = End->Next;
		}
	}

	void Pop_back()
	{
		assert(First != NULL);
		
	}

	void Display()
	{

	}

	

	~MyList()
	{

	}
};

