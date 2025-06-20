#ifndef ELECTIONSYSTEM_H
#define ELECTIONSYSTEM_H

#include<vector>
#include "Voter.h"
#include "Candidate.h"

class ElectionSystem {
private:
    std::vector<Voter> voters;
    std::vector<Candidate> candidates;
    public:
    void registerVoter();
    void loadVoters();
    void loadCandidates();

    void registerCandidate();
    void unregisterCandidate();
    void login();
    void vote();
    void viewResult();
    void loadData();
    void saveData();

};
#endif