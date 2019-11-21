#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Trivia {
  private:
    // string triviaQuestion;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    int correctAnswer;
  public:
    // constructor
    Trivia() {
      // triviaQuestion = "";
      string ans1 = "";
      string ans2 = "";
      string ans3 = "";
      string ans4 = "";
      int correctAnswer = 0;
    }
    // setters / mutators
    void setAns1(string a1) { ans1 = a1; }
    void setAns2(string a2) { ans2 = a2; }
    void setAns3(string a3) { ans3 = a3; }
    void setAns4(string a4) { ans4 = a4; }
    void setCorrectanswer(int ca) { correctAnswer = ca; }
    // getters / accessor
    string getAns1() const { return ans1; }
    string getAns2() const { return ans2; }
    string getAns3() const { return ans3; }
    string getAns4() const { return ans4; }
    int getCorrectAnswer() const { return correctAnswer;}
    // Array of 10 Questions
    // void questionArray() {
    //   cout << "In California you can legally buy a mousetrap without having a what?" << endl;
    //   cout << "In Texas is illegal to swear in front of what?" << endl;
    //   cout << "What ailment kills the most fruit flies" << endl;
    //   cout << "Is it illegal in Georgia to do what with a fork?" << endl;
    //   cout << "What is a group of Unicorns known as?" << endl;
    //   cout << "How old is the oldest piece of chewing?" << endl;
    //   cout << "Which animal is known to kill more people than plane crashes?" << endl;
    //   cout << "The empire state building is made of how many bricks?" << endl;
    //   cout << "How long is a kangaroo baby, when it is born?" << endl;
    //   cout << "Which Hollywood movie showed the first toilet flush?" << endl;
    // };
    string questionArray[10] = {
      "In California you can't legally buy a mousetrap without having a what?",
      "In Texas it is illegal to swear in front of what?",
      "What ailment kills the most fruit flies?",
      "What is it illegal in Georgia to do what with a fork?",
      "What is a group of Unicorns known as?",
      "How old is the oldest piece of chewing gum?",
      "Which animal is known to kill more people than plane crashes?",
      "The empire state building is made of how many bricks?",
      "How long is a kangaroo baby, when it is born?",
      "Which Hollywood movie showed the first toilet flush?"
    };

};

int main() {
  string ques;
  Trivia tr;
  int option;
  int caoption;
  int player1 = 0;
  int player2 = 0;

  // QUESTION 1
  ques = "Money";
  tr.setAns1(ques);
  ques = "Hunting License";
  tr.setAns2(ques);
  ques = "Cheese";
  tr.setAns3(ques);
  ques = "Certification";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(2);
  
  cout << tr.questionArray[0] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player1 = player1 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 2
  ques = "Church";
  tr.setAns1(ques);
  ques = "School";
  tr.setAns2(ques);
  ques = "Hospital";
  tr.setAns3(ques);
  ques = "Corpse";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(4);
  
  cout << tr.questionArray[1] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player2 = player2 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 3
  ques = "Getting crunched";
  tr.setAns1(ques);
  ques = "Cancer";
  tr.setAns2(ques);
  ques = "Constipation";
  tr.setAns3(ques);
  ques = "Age";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(3);
  
  cout << tr.questionArray[2] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player1 = player1 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 4
  ques = "Put it in the ground";
  tr.setAns1(ques);
  ques = "Microwave";
  tr.setAns2(ques);
  ques = "Sell the fork without a license";
  tr.setAns3(ques);
  ques = "Eat fried chicken";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(4);
  
  cout << tr.questionArray[3] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player2 = player2 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 5
  ques = "A Blessing";
  tr.setAns1(ques);
  ques = "Unicorni";
  tr.setAns2(ques);
  ques = "Flock of Corns";
  tr.setAns3(ques);
  ques = "Stampede";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(1);
  
  cout << tr.questionArray[4] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player1 = player1 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 6
  ques = "300 Years";
  tr.setAns1(ques);
  ques = "9000 Years";
  tr.setAns2(ques);
  ques = "30 Seconds";
  tr.setAns3(ques);
  ques = "5400 Years";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(2);
  
  cout << tr.questionArray[5] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player2 = player2 + 1;
  } else {
    cout << "wrong" << endl;
  }

// QUESTION 7
  ques = "Donkey";
  tr.setAns1(ques);
  ques = "Kangaroo";
  tr.setAns2(ques);
  ques = "Cow";
  tr.setAns3(ques);
  ques = "Monkey";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(1);
  
  cout << tr.questionArray[6] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player1 = player1 + 1;
  } else {
    cout << "wrong" << endl;
  }

// QUESTION 8
  ques = "10 Thousand";
  tr.setAns1(ques);
  ques = "20 Million";
  tr.setAns2(ques);
  ques = "10 Million";
  tr.setAns3(ques);
  ques = "500 Thousand";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(3);
  
  cout << tr.questionArray[7] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player2 = player2 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 9
  ques = "3 Feet";
  tr.setAns1(ques);
  ques = "1 Foot";
  tr.setAns2(ques);
  ques = "6 Inches";
  tr.setAns3(ques);
  ques = "1 inch";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(4);
  
  cout << tr.questionArray[8] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player1 = player1 + 1;
  } else {
    cout << "wrong" << endl;
  }

  // QUESTION 9
  ques = "Pyscho";
  tr.setAns1(ques);
  ques = "Lawrence Of Arabia";
  tr.setAns2(ques);
  ques = "The Great Dictator";
  tr.setAns3(ques);
  ques = "Seven Samurai";
  tr.setAns4(ques);
  //caoption = 2;
  tr.setCorrectanswer(1);
  
  cout << tr.questionArray[9] << endl;
  cout << "1) " << tr.getAns1() << endl
  << "2) " << tr.getAns2() << endl
  << "3) " << tr.getAns3() << endl
  << "4) " << tr.getAns4() << endl;
 cout << "Please enter the number for the correct answer: ";
 
  cin >> option;

  if(option == tr.getCorrectAnswer()){
    cout << "Correct" << endl;
    player2 = player2 + 1;
  } else {
    cout << "wrong" << endl;
  }

  cout << "\n\n********************" << endl
  << "Final Score:" << endl
  << "Player 1 - " << player1 << endl
  << "Player 2 - " << player2 << endl;
  if (player1 > player2) { cout << "Player 1 Wins!";}
  else if (player2 > player1) { cout << "Player 2 Wins!";}
  else if (player1 == player2) { cout << "Tie";}
 }