#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>

class Candidate {
private:
    std::string name;
    std::string CandidateID;
    int votes;

public:
    Candidate();
    Candidate(const std::string& name, const std::string& CandidateID);

    void addVote();
    int getVoteCount() const;
    std::string getCandidateID() const;
    std::string getName() const;
};
#endif

