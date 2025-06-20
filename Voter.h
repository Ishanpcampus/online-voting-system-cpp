#ifndef VOTER_H
#define VOTER_H
#include <string>
class Voter {
    private:
    std::string name;
    std::string VoterID;
    std::string password;
    bool hasVoted;
    public:
    Voter();
    Voter(const std::string &name, const std::string &VoterID, const std::string &password);
    bool CheckPassword(const std::string &input);
    void markVoted() ;
    bool voted() const;
    std::string getID() const;
    std::string getName() const;

};
#endif