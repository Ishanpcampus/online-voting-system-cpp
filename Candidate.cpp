//
// Created by ishan on 6/19/25.
//
#include "Candidate.h"

#include "Voter.h"
Candidate::Candidate() : name("") , CandidateID("") , votes(0){}
Candidate::Candidate(const std::string &name, const std::string &id): name(name), CandidateID(id), votes(0) {}

void Candidate::addVote() {
    votes++;
}

int Candidate::getVoteCount() const {
    return votes;
}
std::string Candidate::getName() const {
    return name;
}

std::string Candidate::getCandidateID() const {
    return CandidateID;
}





