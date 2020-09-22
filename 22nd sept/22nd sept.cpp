#include <iostream>
#include <vector>
#include <string>

char ChangeToCapital(char);
char ChangeToCapital(char ch) {
    return toupper(ch);
}

int main()
{
    std::cout << "Please type something:";
    std::string sentence;
    std::getline(std::cin, sentence);

    for (int i = 0; i < sentence.size(); i++) {
            if (sentence.at(i) == 'i' && sentence.at(i-1) == ' ' && sentence.at(i+1)==' ') {
                sentence.at(i) = ChangeToCapital(sentence.at(i));
            }

            else if (i > 2) {
                if (sentence.at(i - 1) == ' ' && sentence.at(i - 2) == '.') {

                    sentence.at(i) = ChangeToCapital(sentence.at(i));
                }
            }
    }
    std::cout << "Updated sentence : " << sentence;
}