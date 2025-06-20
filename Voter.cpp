//
// Created by ishan on 6/19/25.
//
#include"Voter.h"
Voter::Voter() : name(""),VoterID(""),password(""), hasVoted(false) {}
Voter::Voter(const std::string &name, const std::string &VoterID, const std::string &password): name(name), VoterID(VoterID), password(password), hasVoted(false) {}

bool Voter::CheckPassword(const std::string &input) {
    return (input==password);
}

void Voter::markVoted() {
    hasVoted = true;
}
bool Voter::voted() const {
    return hasVoted;
}
std::string Voter::getName() const {
    return name;
}
std::string Voter::getID() const {
    return VoterID;
}