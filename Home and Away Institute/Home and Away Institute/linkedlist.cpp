#include "linkedlist.h"
#include "courselink.h"
#include "stdafx.h"
#include <fstream>
using namespace std;

//default constructor
linkedlist::linkedlist()
{
	head = NULL;
}


//destructor
linkedlist::~linkedlist()
{
	DestroyList();
}


//Add a node to the end of the list
void linkedlist::AddNode(string name ,string code, int an, int ab)
{
	//make the new node
	courselink *node  = new courselink(name, code , an, ab);	
   
    //if memory was sucessfully allocated
    if (node != NULL)
	{
         //if this is the first node to be added 
        //or if list is empty
		if (head == NULL)
		{
			head = node;//make the first element
		}
		else
		{   ///if the list is not empty
			
            courselink *temp = head;
            while(temp->getNextcourselink() != NULL)
				temp = temp->getNextcourselink();
			temp->setNextcourselink(node);//the end is reached we insert the element
		}
	}

	
}

void linkedlist::DestroyList()
{
	courselink *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->getNextcourselink();
		delete temp;
	}
}

void linkedlist::SearchList(string key)
{
	
	courselink *temp = head;
	while (temp != NULL)
	{
		if (temp->getcoursecode()== key)
		{
			return;
		} 
	temp =temp->nextcourselink;
	} 
}

void linkedlist::bubblesort()
	  {
		 courselink *current, *a, *previous, *position;
		 position = new courselink();
		 position->nextcourselink = head;
		 head = position;	


		 while (position->nextcourselink !=NULL )
		 {
			 current = position->nextcourselink ;
			 previous = position;
			 a = current->nextcourselink;

			while(a != NULL)
			{
				if (a->getcoursecredit() < current->getcoursecredit())
				   {
					  courselink *temp = a->nextcourselink;
					  a->nextcourselink = previous->nextcourselink;
					  previous->nextcourselink = current->nextcourselink;
					  current->nextcourselink = temp;

						previous = a;
						a = temp;
				   }
				else
				  {
					a = a->nextcourselink;
					current = current->nextcourselink;
					previous = previous->nextcourselink;
				 }

			}
			 position = position->nextcourselink;
		 }
		 head = head->nextcourselink;
	  }


void linkedlist::bubblesortname()
	  {
		 courselink *current, *a, *previous, *position;
		 position = new courselink();
		 position->nextcourselink = head;
		 head = position;	


		 while (position->nextcourselink !=NULL )
		 {
			 current = position->nextcourselink ;
			 previous = position;
			 a = current->nextcourselink;

			while(a != NULL)
			{
				if (a->getcoursename() < current->getcoursename())
				   {
					  courselink *temp = a->nextcourselink;
					  a->nextcourselink = previous->nextcourselink;
					  previous->nextcourselink = current->nextcourselink;
					  current->nextcourselink = temp;

						previous = a;
						a = temp;
				   }
				else
				  {
					a = a->nextcourselink;
					current = current->nextcourselink;
					previous = previous->nextcourselink;
				 }

			}
			 position = position->nextcourselink;
		 }
		 head = head->nextcourselink;
	  }


void linkedlist::bubblesortcode()
	  {
		 courselink *current, *a, *previous, *position;
		 position = new courselink();
		 position->nextcourselink = head;
		 head = position;	


		 while (position->nextcourselink !=NULL )
		 {
			 current = position->nextcourselink ;
			 previous = position;
			 a = current->nextcourselink;

			while(a != NULL)
			{
				if (a->getcoursecode() < current->getcoursecode())
				   {
					  courselink *temp = a->nextcourselink;
					  a->nextcourselink = previous->nextcourselink;
					  previous->nextcourselink = current->nextcourselink;
					  current->nextcourselink = temp;

						previous = a;
						a = temp;
				   }
				else
				  {
					a = a->nextcourselink;
					current = current->nextcourselink;
					previous = previous->nextcourselink;
				 }

			}
			 position = position->nextcourselink;
		 }
		 head = head->nextcourselink;
	  }


void linkedlist::writecredit()
{

		 courselink *temp = head;

		 fstream file2;
		 file2.open( "sortbycredit.txt", ios::out);

		while (temp != NULL)
		{
			
			file2 << temp->getcoursecode() << " " << temp->getcoursename() << " " << temp->getcourselevel() << " " << temp->getcoursecredit() << endl;
			 
			temp = temp->getNextcourselink();
		}		
		
		  file2.close();
}


void linkedlist::writename()
{

		 courselink *temp = head;

		 fstream file2;
		 file2.open( "sortbyname.txt", ios::out);

		while (temp != NULL)
		{
			
			file2 << temp->getcoursecode() << " " << temp->getcoursename() << " " << temp->getcourselevel() << " " << temp->getcoursecredit() << endl;
			 
			temp = temp->getNextcourselink();
		}		
		
		  file2.close();
}

void linkedlist::writecode()
{

		  courselink *temp = head;

		 fstream file2;
		 file2.open( "sortbycode.txt", ios::out);

		while (temp != NULL)
		{
			
			file2 << temp->getcoursecode() << " " << temp->getcoursename() << " " << temp->getcourselevel() << " " << temp->getcoursecredit() << endl;
			 
			temp = temp->getNextcourselink();
		}		
		
		  file2.close();
}