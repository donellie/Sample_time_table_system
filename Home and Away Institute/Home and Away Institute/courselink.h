#ifndef courselink_h
#define courselink_h
#include <string>
using namespace std;
class courselink
{
private:
    string coursecode;
	string coursename;
	int courselevel;
	int coursecredit;
    

public:
	courselink *nextcourselink;
    courselink();//default Constructor
    courselink(string,string ,int,int);//primary constructor
    ~courselink();
    courselink* getNextcourselink(); //gets the next account pointer
    void setNextcourselink(courselink *); //sets the next account pointer
	string getcoursecode();
	string getcoursename();
	int getcourselevel();
	int getcoursecredit();
   
};
#endif