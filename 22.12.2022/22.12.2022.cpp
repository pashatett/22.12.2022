#include <iostream>
#include <iomanip>

using namespace std;

/*template <typename T>
void display(T* items, int size);
int countAll(const string where, const string what);
int* findAll(string where, string what, int& count);
string toUpr(const string text);
int* findAllR(const string where, const string what, int& count);


#include <vector>
#include <algorithm>

struct Entry {
    string word;
    int count;
};

vector<Entry> getDictionary(string text);
vector<string> getWords(string text);

int main() {
    string text
    { R"(
            If you can keep your head when all about you
            Are losing theirsand blaming it on you;
            If you can trust yourself when all men doubt you,
            But make allowance for their doubting too :
            If you can wait and not be tired by waiting,
            Or, being lied about, don't deal in lies,
            Or being hated don't give way to hating,
            And yet don't look too good, nor talk too wise)"
    };
    cout << text << endl;
	/*int count;
    int* pos = findAllR(text, "and", count);

    display(pos, count);* /

    vector<Entry> dictionary = getDictionary(text);



    for (auto entry : dictionary) {
        cout << setw(12) << entry.word << setw(4) << entry.count << endl;
    }
}

int* findAll(string where, string what, int& count) {
    count = countAll(where, what);
    if (count == 0)return nullptr;
    
    int* array = new int[count];
    int pos = -1;

    for (int i{ 0 }; i < count; i++) {
        pos = where.find(what,pos+1);
        array[i] = pos;
    }
    return array;
}

int* findAllR(string where, string what, int& count) {
    return findAll(toUpr(where), toUpr(what), count);
}

int countAll(const string where, const string what) {
    int count = 0;
    int pos = where.find(what);

    while (pos != string::npos) {
        count++;
        pos = where.find(what, pos + 1);
    }
    return count;
}

template <class T>
void display(T* items, int size) {
    for (int i{ 0 }; i < size; i++) {
        cout << setw(8) << items[i];
    }
    cout << endl;
}

string toUpr(const string text) {
    string uTex = text;
    for (int i{ 0 }; i < uTex.length(); i++) {
        uTex[i] = toupper(uTex[i]);
    }
    return uTex;
}


bool sortByWords(const string& word1, const string& word2) {
    return word1 < word2;
}

vector<Entry> getDictionary(string text) {
    vector<Entry> entries;
    vector<string> words = getWords(text);

    sort(words.begin(), words.begin() + words.size(), sortByWords);

    int i = 0;
    while (i < words.size()) {
        Entry entry{ words[i],0 };
        while (i < words.size() && words[i] == entry.word) {
            entry.count++;
            i++;
        }
        entries.push_back(entry);
    }
    return entries;
}

vector<string> getWords(string text) {
    vector<string> words;
    int pos = 0;
    while (pos < text.size()) {
        while (pos < text.size() && !isalpha(text[pos])) {
            pos++;
        }
        if (pos == text.size())break;
        int wordStart = pos;
        while (pos < text.size() && isalpha(text[pos])) {
            pos++;
        }
        int wordLen = pos - wordStart;
        words.push_back(text.substr(wordStart, wordLen));
    }
    return words;
}*/


#include "Stack.h"
int main() {
    srand(time(0));
    Stack stack;
    char c;

    //пока стек не заполнился
    while (!stack.isFull()) {
        c = rand() % 4 + 2;
        stack.Push(c);
    }
    cout << endl;
    //пока стек не освободился
    while (c = stack.Pop()) {
        cout << c << " ";
    }
}