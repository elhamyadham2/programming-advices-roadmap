#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class clsString
{
private:
	string _Value;
	
public:
	
	clsString()
	{
		_Value = "";
	}
	clsString(string Value)
	{
		_Value = Value;
	}

	// Read Value of String via the properties get and set.
	void SetValue(string Value)
	{
		_Value = Value;
	}
	string GetValue()
	{
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string Value;

	//String Length
	static short Length(string S1)
	{
		return S1.length();
	};
	short Length()
	{
		return _Value.length();
	};

	//Print the first letter of each word in the string.
	void FirstLetterOfEachWord(string S1)
	{
		bool IsFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && IsFirstLetter)
			{
				cout << S1[i] << endl;
			}
			IsFirstLetter = (S1[i] == ' ' ? true : false);
		}
	}
	void FirstLetterOfEachWord()
	{
		FirstLetterOfEachWord(_Value);
	}

	//Uppercase each first letter.
	static string UppercaseFirstLetterEachWord(string S1)
	{
		bool IsFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && IsFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}
			IsFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}
	void UppercaseFirstLetterEachWord()
	{
		_Value = UppercaseFirstLetterEachWord(_Value);
	}

	//Lowercase each First letter.
	static string LowercaseFirstLetterEachWord(string S1)
	{
		bool IsFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && IsFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}
			IsFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}
	void LowercaseFirstLetterEachWord()
	{
		_Value = LowercaseFirstLetterEachWord(_Value);
	}

	//Upper all letters.
	string UppercaseAllLetters(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		}
		return S1;
	}
	void UppercaseAllLetters()
	{
		_Value = UppercaseAllLetters(_Value);
	}

	//LowerCase All letters.
	string LowercaseAllLetters(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}
	void LowercaseAllLetters()
	{
		_Value = LowercaseAllLetters(_Value);
	}

	//InvertChar.
	static char InvertChar(char C1)
	{
		return (islower(C1) ? toupper(C1) : tolower(C1));
	}
	
	//Invert All letter cases.
	static string InvertAllLetters(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertChar(S1[i]);
		}
		return S1;
	}
	void InvertAllLetters()
	{
		_Value = InvertAllLetters(_Value);
	}

	//Count Capital Letters, Small letters and All letters
	enum enWhatToCount{All = 0, CapitalLetter = 1, SmallLetter = 2};
	static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		short counter = 0;

		switch (WhatToCount)
		{
		case(enWhatToCount::All):
		{
			return S1.length();
			break;
		}
		case(enWhatToCount::CapitalLetter):
		{
			for (int i = 0; i < S1.length(); i++)
			{
				if (isupper(S1[i]))
				{
					counter++;
				}
			}
			return counter;
			break;
		}
		case(enWhatToCount::SmallLetter):
		{
			for (int i = 0; i < S1.length(); i++)
			{
				if (islower(S1[i]))
				{
					counter++;
				}
			}
			return counter;
			break;
		}
		}
	}
	short CountLetters(enWhatToCount WhatToCount = enWhatToCount::All)
	{
		return CountLetters(_Value,WhatToCount);
	}

	// count specific Char in a string (match case)
	int MatchCaseCountLetter(string S1, char C1)
	{
		int counter = 0;
		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] == C1)
			{
				counter++;
			}
		}
		return counter;
	}
	int MatchCaseCountLetter(char C1)
	{
		return MatchCaseCountLetter(_Value, C1);
	}

	//count specific Char in a string (match case or not)
	static short AnyCaseCountLetter(string S1, char C1,bool MatchCase = false)
	{
		short counter = 0;
		for (int i = 0; i < S1.length(); i++)
		{
			if (MatchCase)
			{
				if (S1[i] == C1)
				{
					counter++;
				}
			}
			else
			{
				if (tolower(S1[i]) == tolower(C1))
				{
					counter++;
				}
			}
		}
		return counter;
	}
	short AnyCaseCountLetter(char C1)
	{
		return AnyCaseCountLetter(_Value, C1);
	}

	//check if this is char is a vowel
	static bool IsVowel(char C1)
	{
		return (tolower(C1) == 'a' || tolower(C1) == 'e' || tolower(C1) == 'o' || tolower(C1) == 'i' || tolower(C1) == 'u');
	}

	//count vowel in the string
	static short CountVowels(string S1)
	{
		short count = 0;
		for (int i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
			{
				count++;
			}
		}
		return count;
	}
	short CountVowels()
	{
		return CountVowels(_Value);
	}

	// Print Vowels in string
	static void PrintVowels(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
			{
				cout << S1[i] << "   ";
			}
		}
	}
	void PrintVowels()
	{
		PrintVowels(_Value);
	}

	// Print each word in the string
	static void PrintEachWordInString(string S1)
	{
		int pos = 0;
		string sWord;
		string Delm = " ";
		while ((pos = S1.find(Delm)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
			{
				cout << sWord << endl;
			}
			S1.erase(0, pos + Delm.length());
		}
		if (S1 != "")
		{
			cout << S1;
		}
	}
	void PrintEachWordInString()
	{
		PrintEachWordInString(_Value);
	}

	//Count Words In string
	static short NumberOfWordsInString(string S1)
	{
		string sWord;
		short pos = 0;
		string Delm = " ";
		short counter = 0;

		while ((pos = S1.find(Delm)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
			{
				counter++;
			}
			S1.erase(0, pos + Delm.length());
		}
		if (S1 != "")
		{
			counter++;
		}
		return counter;
	}
	short NumberOfWordsInString()
	{
		return NumberOfWordsInString(_Value);
	}

	// Split string into vector
	static vector <string> SplintString(string S1, string Delm = " ")
	{
		string sWord;
		vector <string> vWord;
		int pos = 0;

		while ((pos = S1.find(Delm)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
			{
				vWord.push_back(sWord);
			}
			S1.erase(0, pos + Delm.length());
		}
		if (S1 != "")
		{
			vWord.push_back(S1);
		}
		return vWord;
	}
	vector <string> SplintString()
	{
		return SplintString(_Value);
	}

	//Trim Function
	static string TrimLeft(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}
	void TrimLeft()
	{
		_Value = TrimLeft(_Value);
	}

	//Trim Right
	static string TrimRight(string S1)
	{
		for (int i = S1.length() - 1; i >=0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i+1);
			}
		}
		return "";
	}
	void TrimRight()
	{
		_Value = TrimRight(_Value);
	}

	//string Trim
	static string Trim(string S1)
	{
		return (TrimRight(TrimLeft(S1)));
	}
	void Trim()
	{
		_Value = Trim(_Value);
	}

	//join String
	static string JoinString(vector <string> vString, string Delm = " ")
	{
		string sString = "";

		for (string& s1 : vString)
		{
			sString = sString + s1 + Delm;
		}
		return sString.substr(0, sString.length() - Delm.length());
	}
	// i have no idea how to do this as he wanted to be:::::::::
	//Join string for arrays
	string JoinString(string arrString[], short Length, string Delim)
	{
		string S1 = "";
		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + arrString[i] + Delim;
		}
		return S1.substr(0, S1.length() - Delim.length());
	}

	//Print Words in string in revers.
	static string ReverseWordsInString(string S1)
	{
		string sWord = "";
		vector <string> vWord;
		vWord = SplintString(S1);
		vector<string>::iterator iter = vWord.end();
		while (iter != vWord.begin())
		{
			--iter;
			sWord = sWord + *iter + " ";
		}
		return (sWord.substr(0, sWord.length() - 1));
	}
	void ReverseWordsInString()
	{
		_Value = ReverseWordsInString(_Value);
	}

	//Replace a word in string
	static string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
	{
		int pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
			pos = S1.find(StringToReplace);
		}
		return S1;
	}
	string ReplaceWordInStringUsingBuiltInFunction(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWordInStringUsingBuiltInFunction(_Value, StringToReplace, sRepalceTo);
	}

	// Remove Punctuation
	static string RemovePunctuationsFromString(string S1)
	{
		string S2 = "";
		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}
		return S2;
	}
	void RemovePunctuationsFromString()
	{
		_Value = RemovePunctuationsFromString(_Value);
	}
};

