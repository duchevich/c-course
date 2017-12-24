#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int ind;

typedef struct word 
{
	string ukr;
	string eng;
	struct word *l;
	struct word *r;
} *wordPointer;

void insertWord(wordPointer &dict, wordPointer wrd)
{

	if (dict == NULL) {
		dict = wrd;
	}
	else if (wrd->ukr < dict->ukr) {
		if (dict->l != NULL) {
			insertWord(dict->l, wrd);
		}
		else {
			dict->l = wrd;
		}
	}
	else if (wrd->ukr > dict->ukr) {
		if (dict->r != NULL) {
			insertWord(dict->r, wrd);
		}
		else {
			dict->r = wrd;
		}
	}
}



wordPointer createDictionary() 
{
	wordPointer dictionary = NULL;
	char myString[100];
	string ukr;
	string eng;
	FILE *dict;
	dict = fopen("dict.txt", "r");
	while (!feof(dict)) {
		if (fgets(myString, 100, dict) != NULL) {
			ukr = strtok(myString, " - ");
			eng = strtok(0, " - \n");
			wordPointer wrd = new word;
			wrd->ukr = ukr;
			wrd->eng = eng;
			wrd->l = wrd->r = NULL;
			insertWord(dictionary, wrd);
		}
	}
	fclose(dict);
	return dictionary;
}

void searchWord(wordPointer dict, string &wrd)
{
	if (dict == NULL) {
		cout << "NULL" << endl;
		return;
	}
	else if (wrd < dict->ukr) {
		searchWord(dict->l, wrd);
	}
	else if (wrd > dict->ukr) {
		searchWord(dict->r, wrd);
	}
	else {
		cout << dict->eng << endl;
	}
}

void printDictionary(wordPointer dict)
{
	if (dict == NULL) return;
	cout << dict->ukr << " " << dict->eng << endl;
	printDictionary(dict->l);
	printDictionary(dict->r);
}

void main()
{
	setlocale(0, "");

	//query = "SELECT PIB FROM client WHERE id = 3";
	//cout << name << endl;
	system("pause");
}
/*
void main()
{
	setlocale(0, "");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	wordPointer dictionary = createDictionary();
	printDictionary(dictionary);
	cout << "¬вед≥ть слово: " << endl;
	string input;
	getline(cin, input);
	cout << input << endl;
	while (true) {
		if (input[0] >= '0' && input[0] <= '9') break;
		searchWord(dictionary, input);
		getline(cin, input);
	}
	system("pause");
}*/
