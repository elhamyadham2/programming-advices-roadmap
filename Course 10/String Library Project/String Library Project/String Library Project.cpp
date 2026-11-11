#include <iostream>
#include <string>
#include "clsString.h"

using namespace std;

int main()
{
    clsString String1;
    clsString String2("Mohammed");

    String1.Value = "Elhamy Adham";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "First letter of each word: " << endl;
    String1.FirstLetterOfEachWord();

    cout << "\nUppercase first letter: " << endl;
    String1.Value = String1.UppercaseFirstLetter();
    cout << String1.Value;

    cout << "\nLowecase First letter: " << endl;
    cout << String1.LowercaseFirstLetter();

    cout << "\nUppercase All letters: " << endl;
    cout << String1.UppercaseAllLetters();

    cout << "\nLowercase All letters: " << endl;
    cout << String1.LowercaseAllLetters();

    cout << "\nInvert All letters: " << endl;
    cout << String1.InvertAllLetters();

    cout << "\nString Length = " << String1.CountLetters();
    cout << "\nCapital Letters Count= " << String1.CountLetters(clsString::CapitalLetter);
    cout << "\nSmall Letters Count= " << String1.CountLetters(clsString::SmallLetter);

    char C1 = 'a';
    cout << "\nLetter \'" << C1 << "\' Count = " << String1.MatchCaseCountLetter(C1);
    cout << "\nLetter \'" << C1 << "\' ";
    cout << "Or \'" << clsString::InvertChar(C1)  << "\' ";
    cout << " Count = " << String1.AnyCaseCountLetter(C1) ;



    system("pause > 0");
}