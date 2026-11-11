#pragma once

#include <iostream>
#include <string>

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
	static string UppercaseFirstLetter(string S1)
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
	string UppercaseFirstLetter()
	{
		return UppercaseFirstLetter(_Value);
	}

	//Lowercase each First letter.
	static string LowercaseFirstLetter(string S1)
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
	string LowercaseFirstLetter()
	{
		return LowercaseFirstLetter(_Value);
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
	string UppercaseAllLetters()
	{
		return UppercaseAllLetters(_Value);
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
	string LowercaseAllLetters()
	{
		return LowercaseAllLetters(_Value);
	}

	//InvertChar.
	static char InvertChar(char C1)
	{
		return (islower(C1) ? toupper(C1) : tolower(C1));
	}
	
	//Invert All letter cases.
	string InvertAllLetters(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertChar(S1[i]);
		}
		return S1;
	}
	string InvertAllLetters()
	{
		return InvertAllLetters(_Value);
	}

	//Count Capital Letters, Small letters and All letters
	static enum enWhatToCount{All = 0, CapitalLetter = 1, SmallLetter = 2};
	int CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		int counter = 0;

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
	int CountLetters(enWhatToCount WhatToCount = enWhatToCount::All)
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
	int AnyCaseCountLetter(string S1, char C1,bool MatchCase = false)
	{
		int counter = 0;
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
	int AnyCaseCountLetter(char C1)
	{
		return AnyCaseCountLetter(_Value, C1);
	}

	//check if this is char is a vowel
	bool IsVowel(char C1)
	{
		return (tolower(C1) == 'a' || tolower(C1) == 'e' || tolower(C1) == 'o' || tolower(C1) == 'i' || tolower(C1) == 'u');
	}

	//count vowel in the string


};

