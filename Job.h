//IT21259166
//Z.H.Muhammadh

#pragma once
#include <iostream>
#include "Candidate.h"
#include "Criteria.h"
#include <cstring>


#define SIZE 1

using namespace std;

//Composition relationship between Job and Criteria
// Composition relationship between Job and Employer
//Bi-Directional association between Job and Candidate

class Job
{
private:
	int jobId;
	string jobName;
	int noOfCandidate;
	Candidate* cand[SIZE];
	Criteria* crit[SIZE];
public:
	Job(); // default constructor
	Job(int jId, string jName, int nOfCand, Candidate* Cand1, Criteria* Crit1); //overloaded constructor
	void addJob();
	void deleteJob();
	void addCriteria();
	void getCandidateList();
	void getJobList();
	void updateJobList();
	~Job(); // destructor

};

