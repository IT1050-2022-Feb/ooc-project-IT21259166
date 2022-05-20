#pragma once
#include "GuestUser.h"
#include "RegisteredUser.h"
#include <iostream>


using namespace std;

GuestUser::GuestUser() {
	name = "";
	email = "";
}

GuestUser::GuestUser(string rName, string rEmail) {
	name = rName;
	email = rEmail;
}

void  GuestUser::registerUser() {
}

GuestUser::~GuestUser() {
	cout << "Destructor called for Guest User Class" << endl;
}