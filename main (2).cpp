#include <iostream>
#include "Manager.h"
#include "MCQ.h"
#include "OpenEnded.h"
#include "TrueFalse.h"

int main() {
    Manager manager;

    // Create Users
    manager.createUser("Alice");
    manager.createUser("Bob");

    // Create Quiz
    manager.createQuiz(101);

    // Access the quiz (assumes it's the first one)
    Quiz<std::string>& quiz = manager.getUsers().empty() ?
        *(new Quiz<std::string>(101)) : manager.getUsers()[0].getScore() == 0 ? *(new Quiz<std::string>(101)) :
    *(new Quiz<std::string>(101));

    // Add Questions
    MCQ* q1 = new MCQ("What is the capital of France?", "Paris", {"Berlin", "London", "Paris", "Madrid"});
    OpenEnded* q2 = new OpenEnded("Who wrote '1984'?", "Orwell");
    TrueFalse* q3 = new TrueFalse("The sky is green.", "False");

    quiz.addQuestion(q1);
    quiz.addQuestion(q2);
    quiz.addQuestion(q3);

    // Let Alice take the quiz
    User& user = manager.getUsers()[0];
    std::cout << "\nWelcome, " << user.getNickname() << "! Starting quiz...\n\n";
    quiz.displayQuestionsAndGetAnswers(user);

    // Show Leaderboard
    std::cout << "\nFinal Scores:\n";
    manager.leaderboard();

    // Clean up
    delete q1;
    delete q2;
    delete q3;

    return 0;
}
