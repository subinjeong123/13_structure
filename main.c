#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID;
	char name[10];
	double grade;
};
int main(int argc, char *argv[]) 
{
	struct student s1 = {1914722, "Yoonseo", 3.0}; 
	struct student s2 = {1913004, "Yeonsu", 4.3};
	struct student s3 = {1911233, "Yewon", 1.0};
	struct student s4 = {1911111, "Juyeop", 4.0};
	struct student s5 = {1922222, "Woong", 4.0};
	struct student s6 = {1914722, "Yoonseo", 3.0}; 
	struct student s7 = {1913004, "Yeonsu", 4.3};
	struct student s8 = {1911233, "Yewon", 1.0};
	struct student s9 = {1911111, "Juyeop", 4.0};
	struct student s10 = {1922222, "Woong", 4.0};
	
	return 0;
}
