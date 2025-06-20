//
// Created by ishan on 6/19/25.
//
#include "ElectionSystem.h"
#include <iostream>

void ElectionSystem::registerVoter() {
    std::cout << "Registering voter..." << std::endl;
    std::string name,id,password;
    std::cout<<"Please enter name: ";
    std::cin>>name;
    std::cout<<"Please enter voter id: ";
    std::cin>>id;
    std::cout<<"Please set a password: ";
    std::cin>>password;
    voters.push_back(Voter(name,id,password));
    std::cout<<"Voter registered"<<std::endl;
}
void ElectionSystem::registerCandidate() {
    std::cout << "Registering candidate..." << std::endl;
    std::string name,id;
    std::cout<<"Please enter candidate's name: ";
    std::cin>>name;
    std::cout<<"Please enter candidate ID: ";
    std::cin>>id;
    candidates.push_back(Candidate(name,id));
    std::cout<<"Candidate registered"<<std::endl;
}
void ElectionSystem::vote() {
    std::string id,password,CandidateID;
    std::cout<<"Enter your voter ID: ";
    std::cin>>id;
    std::cout<<"Enter your password: ";
    std::cin>>password;
    bool found=false;
    for (auto& voter : voters) {
        if (voter.getID() == id && voter.CheckPassword(password)) {
            if (voter.voted()) {
                std::cout<<"You've already voted"<<std::endl;
                return;
            }
            std::cout<<"Candidates:\n";
            for (auto &Candidate : candidates) {
                std::cout<<Candidate.getCandidateID() <<"-" <<Candidate.getName()<<std::endl;
            }
            std::cout<<"Please enter candidate ID to vote: ";
            std::cin>>CandidateID;
            for (auto &Candidate:candidates) {
                if (Candidate.getCandidateID()==CandidateID) {
                    Candidate.addVote();
                    voter.markVoted();
                    std::cout<<"Your vote has been voted"<<std::endl;
                    found=true;
                    break;
                }
            }
            if (!found) {
                std::cout<<"Candidate not found"<<std::endl;
                return;
            }
        }
    }

}
void ElectionSystem::viewResult() {
    std::cout << "\n=== Election Results ===\n";
    for (const auto& Candidate : candidates) {
        std::cout << Candidate.getName() << " (" << Candidate.getCandidateID() << "): " << Candidate.getVoteCount() << " votes\n";
    }
}


