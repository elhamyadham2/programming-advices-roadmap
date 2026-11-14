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
    String1.UppercaseFirstLetterEachWord();
    cout << String1.Value;

    cout << "\nLowecase First letter: " << endl;
    String1.LowercaseFirstLetterEachWord();
    cout << String1.Value;

    cout << "\nUppercase All letters: " << endl;
    String1.UppercaseAllLetters();
    cout << String1.Value;

    cout << "\nLowercase All letters: " << endl;
    String1.LowercaseAllLetters();
    cout << String1.Value;

    cout << "\nInvert All letters: " << endl;
    String1.InvertAllLetters();
    cout << String1.Value;

    cout << "\nString Length = " << String1.CountLetters();
    cout << "\nCapital Letters Count= " << String1.CountLetters(clsString::CapitalLetter);
    cout << "\nSmall Letters Count= " << String1.CountLetters(clsString::SmallLetter);

    char C1 = 'a';
    cout << "\nLetter \'" << C1 << "\' Count = " << String1.MatchCaseCountLetter(C1);
    cout << "\nLetter \'" << C1 << "\' ";
    cout << "Or \'" << clsString::InvertChar(C1)  << "\' ";
    cout << " Count = " << String1.AnyCaseCountLetter(C1) << endl ;

    cout << "\nCount of Vowels: " <<String1.CountVowels() << endl;

    cout << "Vowels are : "; String1.PrintVowels();

    cout << "\nWords in string : "; String1.PrintEachWordInString();

    cout << "\nNumber of Words In String : " << String1.NumberOfWordsInString();

    vector<string> vString;
    vString = String1.SplintString();
    cout << "\nVector of Words In String : ";
    for (string& s1 : vString)
    {
        cout << s1 << endl;
    }

    cout << "\nTrim Right:" << String1.TrimRight("           Elhamy Adham        ");
    cout << "\nTrim left :" << String1.TrimLeft("           Elhamy Adham        ");
    cout << "\nTrim All:" << String1.Trim("           Elhamy Adham        ");

    cout << "\nRevers String : ";
    String1.ReverseWordsInString();
    cout << String1.Value;

    cout << "\nReplace Word in string: " << String1.ReplaceWordInStringUsingBuiltInFunction("ADHAM", "Rabie");

    cout << "\nRemove Puctuation: " << String1.RemovePunctuationsFromString(":Elhamy, Adham,, Rabie.");
    system("pause > 0");
}