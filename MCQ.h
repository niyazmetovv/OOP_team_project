#ifndef MCQ_H
#define MCQ_H

#include "Question.h"
#include <vector>
#include <iostream>
using namespace std;

class MCQ : public Question<string> {
private:
    vector<string> options;

public:
    MCQ(string questionText, string correctAnswer, vector<string> options)
        : Question(questionText, correctAnswer), options(options) {}

    void displayQuestion() const override {
        cout << questionText << "\n";
        for (size_t i = 0; i < options.size(); ++i) {
            cout << char('A' + i) << ") " << options[i] << "\n";
        }
    }

    bool checkAnswer(string answer) const override {
        return answer == correctAnswer;
    }
};

#endif // MCQ_H
