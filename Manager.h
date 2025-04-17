#ifndef MANAGER_H
#define MANAGER_H

#include "User.h"
#include "Quiz.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Manager {
private:
    vector<User> users;
    vector<Quiz<string>> quizzes;

public:
    void createUser(string nickname) {
        users.emplace_back(nickname);
    }

    void createQuiz(int quizID) {
        quizzes.emplace_back(quizID);
    }

    vector<User>& getUsers() {
        return users;
    }

    void leaderboard() {
        sort(users.begin(), users.end(), [](const User& a, const User& b) {
            return a.getScore() > b.getScore();
        });

        cout << "Leaderboard:\n";
        for (const auto& user : users) {
            std::cout << user.getNickname() << ": " << user.getScore() << "\n";
        }
    }
};

#endif // MANAGER_H
