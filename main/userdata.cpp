#include <iostream>
#include <string>
#include "header.h"

using namespace std;

Userdata::Userdata()
{
	username  = "NULLPTR";
	IPaddress = "NULLPTR";
	free_next = nullptr;
	floodStamp = 0;
	userStamp = 0;
	ipStamp = 0;
}

Userdata::Userdata(string name, string IP)
{
	username  = name;
	IPaddress = IP;
	free_next = nullptr;
	floodStamp = 0;
	userStamp = 0;
	ipStamp = 0;
}