cmake_minimum_required(VERSION 3.29)
project(OOP_team_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OOP_team_project
    "main.cpp"
    MCQ.h
    OpenEnded.h
    Question.h
    Quiz.h
    TrueFalse.h
    User.h
    Manager.h)
