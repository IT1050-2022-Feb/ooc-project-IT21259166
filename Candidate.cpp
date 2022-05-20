//IT21259166
//Z.H.Muhammadh

#pragma once
#include <iostream>
#include <cstring>
#include "Candidate.h"
#include "Job.h"
#include "RegisteredUser.h"


#define SIZE 1

using namespace std;

Candidate::Candidate() :RegisteredUser() {

	candId = "";
	contactNumber = "";
	candAddress = "";
	age = 0;
	dOB = "";
	name = "";
	email = "";
	userId = "";
	password = "";
	
	job[0] = new Job();
}

Candidate::Candidate(string cId, string contactNo, string cAddress, int cAge, string cDOB, string rName, string rEmail, string uId, string pWord, Job* Job1, Employer* Emp)
	: RegisteredUser(uId, pWord, rName, rEmail) {
	candId = cId;
	contactNumber = contactNo;
	candAddress = cAddress;
	age = cAge;
	dOB = cDOB;
	name = rName;
	email = rEmail;
	userId = uId;
	password = pWord;

	job[0] = new Job(*Job1);
	emp = Emp;


}
void Candidate::registerUser() {
}


void Candidate::login() {
}

void Candidate::updateProfile() {
}

void Candidate::searchJob() {
}

void Candidate::applyJob() {
}

void Candidate::uploadResume() {
}

void Candidate::viewStatus() {
}

void Candidate::storeCandidateDetails() {
}

Candidate::~Candidate() {
	cout << "Destructor called for Candidate class" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		delete job[i];
	}

	delete  emp;
}