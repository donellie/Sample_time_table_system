#ifndef linkedlist_h
#define linkedlist_h
#include "courselink.h"

class linkedlist
{
private:
    courselink *head; 

public:
    linkedlist();
    ~linkedlist();
    void AddNode(string, string, int , int);
    void DestroyList();
	void SearchList(string);
	void bubblesort();	
	void bubblesortname();
	void bubblesortcode();
	void writecredit();
	void writecode();
	void writename();
};
#endif