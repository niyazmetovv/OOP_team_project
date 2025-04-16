#ifndef QUESTION_H
#define QUESTION_H

#include <string>
using namespace std;

template <typename T>
class Question {
protected:
    string questionText;
    T correctAnswer;

public:
    Question(string questionText, T correctAnswer) {
        this->questionText = questionText;
        this->correctAnswer = correctAnswer;
    }

    virtual void displayQuestion() const = 0;
    virtual bool checkAnswer(T answer) const = 0;

    void setQuestion(string text) {
        questionText = text;
    }

    string getQuestion() const {
        return questionText;
    }

    virtual ~Question() {}
};

#endif // QUESTION_H
