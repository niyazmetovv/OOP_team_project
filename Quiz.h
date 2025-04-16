#ifndef QUIZ_H
#define QUIZ_H

#include "Question.h"
#include "User.h"
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Quiz {
private:
    int quizID;
    std::vector<Question<T>*> questions;

public:
    Quiz(int quizID) : quizID(quizID) {}

    void setQuizID(int id) {
        quizID = id;
    }

    int getQuizID() const {
        return quizID;
    }

    void addQuestion(Question<T>* q) {
        questions.push_back(q);
    }

    void displayQuestionsAndGetAnswers(User& user) {
        for (auto q : questions) {
            q->displayQuestion();
            cout << "Your answer: ";
            T answer;
            cin >> answer;
            if (q->checkAnswer(answer)) {
                cout << "Correct!\n";
                user.incrementScore();
            } else {
                cout << "Wrong!\n";
            }
        }
    }
};

#endif // QUIZ_H
