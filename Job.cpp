//IT21259166
//Z.H.Muhammadh

#pragma once
#include "Job.h"
#include <iostream>
#include <cstring>
#include "Criteria.h"
#include "Candidate.h"


using namespace std;

Job::Job() {
	jobId = 0;
	jobName = "";
	noOfCandidate = 0;

	cand[0] = new Candidate();

	crit[0] = new Criteria();
}

Job::Job(int jId, string jName, int nOfCand, Candidate* Cand1, Criteria* Crit1) {

	jobId = jId;
	jobName = jName;
	noOfCandidate = nOfCand;

	cand[0] = new Candidate(*Cand1);

	crit[0] = new Criteria(*Crit1);
}

void Job::addJob() {

}

void Job::deleteJob() {
}

void Job::addCriteria() {

}

void Job::getCandidateList() {
}

void Job::getJobList() {
}

void Job::updateJobList() {
}

Job::~Job() {
	cout << "Destructor called for Job Class" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		delete cand[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		delete crit[i];
	}
}

