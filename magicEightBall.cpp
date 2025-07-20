#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <random>

int main() {
  std::vector<std::string> predictions = {
    "It is certain.",
    "It is decidedly so.",
    "Without a doubt.",
    "Yes - definitely.",
    "You may rely on it.",
    "As I see it, yes.",
    "Most likely.",
    "Outlook good.",
    "Yes.",
    "Signs point to yes.",
    "Reply hazy, try again.",
    "Ask again later.",
    "Better not tell you now.",
    "Cannot predict now.",
    "Concentrate and ask again.",
    "Don't count on it.",
    "My reply is no.",
    "My sources say no.",
    "Outlook not so good.",
    "Very doubtful."
  };
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(0, predictions.size() - 1);

  int randomIndex = dist(gen);

  std::string randomString = predictions[randomIndex];

  std::cout << "MAGIC 8-BALL:\n";
  std::cout << randomString;

}