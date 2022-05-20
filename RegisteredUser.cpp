#pragma once
#include <iostream>
#include "GuestUser.h"
#include "RegisteredUser.h"

using namespace std;

//Inheritance relationship between GuestUser and RegisteredUser classes 

RegisteredUser::RegisteredUser() : GuestUser() {

	userId = "";
	password = "";
	name = "";
	email = "";
}

RegisteredUser::RegisteredUser(string uId, string pWord, string rName, string rEmail) : GuestUser(rName, rEmail) {
	userId = uId;
	password = pWord;
	name = rName;
	email = rEmail;
}
bool RegisteredUser::verifyLogin() {

	return true;
}
RegisteredUser::~RegisteredUser() {
	cout << "Destructor called for Registered User Class" << endl;
}