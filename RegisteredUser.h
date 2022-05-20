//IT21259166
//Z.H.Muhammadh

#pragma once

#include <iostream>
#include <cstring>
#include "GuestUser.h"

using namespace std;

//Inheritance relationship between GuestUser and RegisteredUser

class RegisteredUser :public GuestUser
{
protected:
	string userId;
	string password;
public:
	RegisteredUser();
	RegisteredUser(string uId, string pWord, string rName, string rEmail);
	bool verifyLogin();
	~RegisteredUser();

};

