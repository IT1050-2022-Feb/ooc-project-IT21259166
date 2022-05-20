//IT21259166
//Z.H.Muhammadh

#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
#include "GuestUser.h"
#include "Job.h"
#include "RegisteredUser.h"
#include "Employer.h"


#define SIZE 1

using namespace std;

//Inheritance relationship between Registered User and Candidate classes
//Bi-Directional association between Candidate and Employer
//Bi-Directional association between Candidate and Job

class Candidate :public RegisteredUser
{
private:
	string candId;
	string contactNumber;
	string candAddress;
	int age;
	string dOB;

	Job* job[SIZE];
	Employer* emp;
public:
	Candidate();
	Candidate(string cId, string contactNo, string cAddress, int age, string cDOB, string rName, string rEmail, string uId, string pWord, Job* Job1, Employer* Emp);
	void registerUser();
	void login();
	void updateProfile();
	void searchJob();
	void applyJob();
	void uploadResume();
	void viewStatus();
	void storeCandidateDetails();
	~Candidate();

};
