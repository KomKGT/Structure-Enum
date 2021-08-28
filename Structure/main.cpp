#include <iostream>
#include <string.h>
#define robot_base DIFFERENTIAL_DRIVE
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum base{DIFFERENTIAL_DRIVE, SKID_STEER, ACKERMANN, ACKERMANN1, MECANUM};
struct student{
	int id;
	string name ;
	float point;
};
student assign()
{
	student std00;
	std00.id = 10;
	std00.name = "KOM";
	std00.point = 100;
	return std00;
}
int main(int argc, char** argv) {
	enum base robotbase = robot_base;
	cout<<robot_base<<endl;
	student std01  = assign();
	cout<<std01.id;
	
	return 0;
}
