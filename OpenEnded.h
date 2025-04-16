#ifndef OPENENDED_H
#define OPENENDED_H

#include "Question.h"
#include <iostream>
using namespace std;

class OpenEnded : public Question<string> {
public:
    OpenEnded(string questionText, string correctAnswer)
        : Question(questionText, correctAnswer) {}

    void displayQuestion() const override {
        cout << questionText << " (Open-ended)\n";
    }

    bool checkAnswer(string answer) const override {
        return answer == correctAnswer;
    }
};

#endif // OPENENDED_H
