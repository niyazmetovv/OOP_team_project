#ifndef TRUEFALSE_H
#define TRUEFALSE_H

#include "Question.h"
#include <iostream>
using namespace std;


class TrueFalse : public Question<string> {
public:
    TrueFalse(string questionText, string correctAnswer)
        : Question(questionText, correctAnswer) {}

    void displayQuestion() const override {
        cout << questionText << " (True/False)\n";
    }

    bool checkAnswer(string answer) const override {
        return answer == correctAnswer;
    }
};

#endif // TRUEFALSE_H
