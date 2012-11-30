#include "courselink.h"
#include "stdafx.h"
using namespace std;

courselink::courselink()
{

}


courselink::courselink(string a,string b,int an, int ab) 
{

	coursecode = a;
	coursename = b;
	courselevel = an;
	coursecredit = ab;
	nextcourselink = NULL;
}


courselink::~courselink() //destructor
{
	cout << getNextcourselink();
}


courselink * courselink::getNextcourselink() 
{
	return nextcourselink;
}

void courselink::setNextcourselink(courselink *na) 
{
	nextcourselink = na;
}


string courselink::getcoursecode()
{
	return coursecode;

}

string courselink::getcoursename()
{
	return coursename;

}

int courselink::getcourselevel()
{
	return courselevel;

}

int courselink::getcoursecredit()
{
	return coursecredit;

}