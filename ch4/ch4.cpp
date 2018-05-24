#include "../std_lib_facilities.h"

int mySquareRedux(int x);
void printSquare(int root, int square);
double convertCtoF(double c);
void characterTableSorter();
void mySquare();
void charTableForLoop();
void vectorsA(); // temperatures
void analyzeTemps(vector<double> temps);
void vectorsB(); // string
string carlin(string w); // check against Carlin's words
void get_a_word(); // ask for a word and run carlin on it


// ==== MAIN ====
int main() {
  //vectorsA();
  // vectorsB();
  get_a_word();

  keep_window_open();
  return 0;
}

// convert C to F
double convertCtoF(double dc) {
  double df = 9.0 / 5 * dc + 32;
  return df;
}

// Character Table
void characterTableSorter() {
  int asciiVal = 97;
  char asciiChar{};

  while (asciiVal < (97 + 26)) {
    asciiChar = asciiVal;
    cout << asciiChar << " " << asciiVal << "\n";
    asciiVal++;
  }
}

// Character Table For.. Loop
void charTableForLoop() {
  char asciiChar{};

  // do uppercase
  char startChar = 'A';
  int startVal = startChar;
  int stopVal = startVal + 26;

  for (int asciiVal = startVal; asciiVal < stopVal; asciiVal++) {
    asciiChar = asciiVal;
    cout << asciiChar << " " << asciiVal << "\n";
  }

  // do lowercase
  startChar = 'a';
  startVal = startChar;
  stopVal = startVal + 26;

  for (int asciiVal = startVal; asciiVal < stopVal; asciiVal++) {
    asciiChar = asciiVal;
    cout << asciiChar << " " << asciiVal << "\n";
  }
}

// 4.5.1 Squares
void mySquare() {
  for (int root = 0; root <= 100; root++) {
    printSquare(root, mySquareRedux(root));
  }
}

int mySquareRedux(int x) {
  int y = 0;
  for (int i = 0; i < x; i++) {
    y += x;
  }
  return y;
}

void printSquare(int root, int square) {
  cout << root << " " << square << "\n";
}

// create a vector of temperatures
void vectorsA() {
  vector<double> temps;             // temperatures
  for (double temp; cin >> temp;) { // read into temps
    temps.push_back(temp);          // put temp into the vector
    cout << convertCtoF(temp) << "\n";
  }
  analyzeTemps(temps);
}

// calculate the median and mean of the temps vector
void analyzeTemps(vector<double> temps) {
  int size = temps.size(); // size of the temps vector

  // mean / average temp
  double sum = 0;
  for (double x : temps)sum += x; // // total of all the temps
  double avgTemp = convertCtoF(sum/size);
  cout << "The average temperature: " << avgTemp << "F\n";

  // median temps

  cout << "The median temp: "
  << convertCtoF(temps[size/(size/2)])
  << "F\n";
}

// strings
void vectorsB(){
  vector<string> words;
  for (string temp; cin >> temp;) // read in whitespace seprtd words
  words.push_back(temp); // put each word in the array
  cout << "Number of words: " << words.size() << "\n";
  sort(words);
  for (int i = 0; i < words.size(); i++){
    if (i==0 || words[i-1]!=words[i])
      cout << words[i] << "\n";
  }
}

// test for carlins word and retur bleep if found
string carlin(string w){
  vector<string> dirty_words {"shit",
                              "piss",
                              "fuck",
                              "cunt",
                              "cocksucker",
                              "motherfucker",
                              "tits",
                              "shit",
                              "PISS",
                              "FUCK",
                              "CUNT",
                              "COCKSUCKER",
                              "MOTHERFUCKER",
                              "TITS"};

  for (string dw : dirty_words){
    if(w == dw) w = " **BLEEP**, one of Carlin's Dirty Words.";
  }
  return w;
}

void get_a_word() {
  string word {""};

  while (word != "QUIT"){
    cout << "Enter a word: ";
    cin >> word;
    cout << "You entered " << carlin(word) << "\n";
  }
}
