#include<bits/stdc++.h>

using namespace std;

const string WORD_LIST[] = {
	
		"kettle", "key", "knee", "knife", "knot",
		"leaf", "leg", "library", "line", "lip", "lock",
		"map", "match", "monkey", "moon", "mouth", "muscle",
		"nail", "neck", "needle", "nerve", "net", "nose", "nut",
		"office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
		"pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
		"rail", "rat", "receipt", "ring", "rod", "roof", "root",
		"sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
		"shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
		"square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
		"store", "street", "sun",
		"table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth",
		"town", "train", "tray", "tree", "trousers",
		"umbrella",
		"wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm" };

const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

string chooseWord()
{
	int randomIndex = rand() % WORD_COUNT;
	cout << WORD_LIST[randomIndex]<< endl ;

	return WORD_LIST[randomIndex];
}

const string FIGURE[] = {
		"   -------------    \n"
		"   |                \n"
		"   |                \n"
		"   |                \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |                \n"
		"   |                \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |                \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |           |    \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |          /|    \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |          /|\\  \n"
		"   |                \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |          /|\\  \n"
		"   |          /     \n"
		"   |     \n"
		" -----   \n",
		"   -------------    \n"
		"   |           |    \n"
		"   |           O    \n"
		"   |          /|\\  \n"
		"   |          / \\  \n"
		"   |     \n"
		" -----   \n"
};

void renderGame(string guessedWord, int badGuessCount) {
	cout << FIGURE[badGuessCount] << endl;
	cout << guessedWord << endl;
	cout << "so lan doan sai la :" << badGuessCount << endl;
 }

string update(string guessedWord, string word, char guess)
{
	for (int i = 0; i < word.size(); ++i) {
		if (word[i] == guess)
		{
			guessedWord[i] = guess;

		}
	}
	return guessedWord;

}
bool contains(string word, char guess) {
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == guess) {
            return true;
        }
    }
    return false;
}

char readAGuess() {
	char c;
	cin >> c;
	return c;

}

int main() {
	srand(time(0));
	string word = chooseWord();
	string guessedWord = string(word.length(), '-');
	int badGuessCount = 0;

	do {
		renderGame(guessedWord, badGuessCount);
		char guess = readAGuess();
		if (contains(word, guess))
			guessedWord = update(guessedWord, word, guess);
		else badGuessCount++;
	} while (badGuessCount < 7 && word != guessedWord);

	renderGame(guessedWord, badGuessCount);
	if (badGuessCount < 7) cout << "Congratulations! You win!";
	else cout << "DEFEAT" << word;
}
