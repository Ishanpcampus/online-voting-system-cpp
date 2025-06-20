#include <iostream>
#include "ElectionSystem.h"

int main() {
    ElectionSystem system;
    int choice;
    system.loadVoters();
    system.loadCandidates();


    do {
        std::cout << "\n=== Online Voting System ===\n";
        std::cout << "1. Register Voter\n";
        std::cout << "2. Register Candidate\n";
        std::cout << "3. Vote\n";
        std::cout << "4. View Results\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: system.registerVoter(); break;
            case 2: system.registerCandidate(); break;
            case 3: system.vote(); break;
            case 4: system.viewResult(); break;
            case 0: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice!\n"; break;
        }

    } while (choice != 0);

    return 0;
}
