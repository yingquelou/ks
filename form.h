#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef enum SEX
{
	female,
	male
}SEX;
typedef struct
{
	char* Name;
	size_t Age;
	SEX sex;
}Stu;
typedef struct student
{
	Stu* Date;
	struct student* Next;
}Form, * pForm;