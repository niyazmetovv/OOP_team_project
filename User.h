#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    string nickname;
    int score;

public:
    User(string nickname) {
        this->nickname = nickname;
        this->score = 0;
    }

    void setNickname(string nickname) {
        this->nickname = nickname;
    }

    string getNickname() const {
        return nickname;
    }

    void setScore(int score) {
        this->score = score;
    }

    int getScore() const {
        return score;
    }

    void incrementScore() {
        score++;
    }
};

#endif // USER_H
