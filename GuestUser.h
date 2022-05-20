#pragma once
#include <iostream>

using namespace std;

class GuestUser
{
protected:
	string name;
	string email;
public:
	GuestUser();
	GuestUser(string rName, string rEmail);
	virtual void registerUser();
	~GuestUser();
};

