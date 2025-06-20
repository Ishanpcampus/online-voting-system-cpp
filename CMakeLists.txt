cmake_minimum_required(VERSION 3.10)
project(OnlineVotingSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineVotingSystem
    main.cpp
    Voter.h
    Candidate.h
    ElectionSystem.h
        Voter.cpp
        Candidate.cpp
        ElectionSystem.cpp
)
