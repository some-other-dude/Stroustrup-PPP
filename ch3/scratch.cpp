// scratch file for chapter 3
#include "../std_lib_facilities.h"
#include <vector>


int main () {

  //example 3.1
  // cout << "Please enter your name (follwed by 'enter'): ";
  // string first_name;
  // cin >> first_name;
  // cout << "Hello, " << first_name << endl;

  // example 3.2
  // cout << "Please enter your first name and age:\n";
  // string first_name;
  // double age = 0.0;
  // cin >> first_name;
  // cin >> age;
  // cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";

  // example 3.4

  // ---  arithmetic
  // cout << "Please enter a int value: ";
  // int n = 0;
  // cin >> n;
  // double square_root = sqrt(n);
  // cout << "n == " << n
  // << "\nn + 1 == " << n+1
  // << "\nthree times n == " << n*3
  // << "\ntwice n == " << n*2
  // << "\nn squared == " << n*n
  // << "\nhalf of n == " << n/2
  // << "\nsquare root of n == " << square_root
  // << "\n";

  // Example 3.5
  // --- strings
  // cout << "Please enter two strings...\n";
  //
  // string first;
  // string second;
  // cin >> first >> second;
  // if (first == second) cout << "That's the same name twice\n";
  // if (first < second) cout <<  first << " is alphabetically before " << second << '\n';
  // if (first > second) cout << first << " is alphabetically after " << second << '\n';

  // Example 3.5.1
  // --- repeated strings
  // string previous = " "; // init to "not a word"
  // string current; // current word
  // cout << "Enter a string of words\n";
  // while (cin >> current) { // read a stream of words
  //   if (previous == current) // check if word is the same as the last
  //   cout << "repeated word: " << current << '\n';
  //   previous = current;
  // }

  // Example 3.6.1
  // Composite assignment operators
  // Repeated string REDUX
  // string previous = " "; // init to "not a word"
  // string current; // current word
  // int number_of_words = 0; // count of words
  // cout << "Enter a string of words\n";
  // while (cin >> current) { // read a stream of words
  //   ++number_of_words; // increment the total word count
  //   if (previous == current) // check if word is the same as the last
  //   cout << "word number " << number_of_words
  //   << " repeated: " << current << '\n';
  //   previous = current;
  // }

  // 3.7 Variable naming
  // -- skipped

  // 3.8 Types and Objects
  // type - defines a set of possible values and a set of operations for an object
  // Object - some memory that holds a value of the given Types
  // Value - a set of bits in memory interpreted according to type
  // variable - a named Object
  // declaration - a statement giving a name to an Object
  // definition - a declaration that sets aside memory for an Object

  // 3.9 Type Safety
  // double x; // we "forgot" to initialize: the value of x is undefined
  // double y = x; // the value of y is undefined
  // double z = 2.0 + x; // the meaning of + and the value of z are undefined

  // 3.9.1 Safe Conversions
  // char to int to char
  // char c = 'x'; // ASCII character
  // int i1 = c; // bits of type char == int value 120
  // int i2 = 'x'; // bits of ASCII character 'x' === int value 120
  // char c2 = i2; // bits of int 120 == ASCII character 'x'
  //
  // cout << c << ' ' << i1 << ' ' << c2 << '\n';

  // int to double
  // double d1 = 2.3;
  // double d2 = d1 + 2; // 2 is converted to 2.0 before adding
  // if (d1 < 0) // 0 is converted to 0.0 before comparison
  // cout << "d1 is negative";

  // 3.9.2 Usafe Conversions
  // int a = 20000;
  // char c = a; // try to squeeze a large int into a cmall character
  // int b = c;
  // if (a != b)
  // cout << "oops! " << a << "!=" << b << '\n';
  // else
  // cout << "Wow!  We have large characters\n";

  // double d = 0;
  // while (cin >> d) {
  //   int i = d; // try to squeeze a double int into an int
  //   char c = i; // try to squeeze an int into a char
  //   int i2 = c; // get the integer value of teh character
  //   cout << "d == " << d // the original double
  //   << " i == " << i // converted to an int
  //   << " i2 == " << i2 // int value of char
  //   << " char(" << c << ")\n"; // the char
  // }

  // --- using list notation for initialization
  // --- to prevent narrowing
  // double x {2.7}; // OK
  // int y {x}; // error: double d -> int might narrow
  // int a {1000}; // OK
  // char b {a}; // error: int -> char might narrow
  // char b1 {1000}; // error: narrowing (assuming 8-bit characters)
  // char b2 {48}; // OK - 48 is an int literal that is small enough to fit in 8 bits

  // DRILL DRILL DRILL
  // create a form letter from user input

  // prompt the user for their name
  // string writer_name {""};
  // cout << "What's your first name? ";
  // cin >> writer_name;
  //
  // //prompt user for the name of the person they want to write to
  // string first_name {""};
  // cout << "What's the first name of the person you want to write to? ";
  // cin >> first_name;
  //
  // //ask for a friend's named
  // string friends_name {""};
  // cout << "What's the first name of a friend you'd like to ask about? ";
  // cin >> friends_name;
  //
  // // get friend's gender
  // string friends_gender {" "};
  // cout << "What's the friend's gender? (b/g) ";
  // cin >> friends_gender;
  //
  // // get friend's age in years
  // int age {0};
  // cout << "What's your age in years? ";
  // cin >> age;
  //
  // // write the first part of the letter
  // cout << "Dear " << first_name << ",\n\n"
  // << "How are you?  I am fine.  I miss you.\n\n"
  // << "Have you seen " << friends_name << " lately? "
  // << "If you see " << friends_name << ", please ask ";
  //
  // // test for gender
  // if (friends_gender == "b"){
  //   cout << "him";
  // }
  // else {
  //   cout << "her";
  // }
  //
  // cout << " to call me.\n\n";
  //
  // // test for age
  // if (age <= 0 || age > 100) { // check for out of bounds
  //   simple_error("You're kidding!!");
  // }
  // else{
  //   cout << "I hear you just had a birthday and you are " << age
  //   << " years old. ";
  //   // child
  //   if ( age < 12 ) {
  //     cout << "Next year you will be " << age + 1 << ".";
  //   }
  //   // almost adult
  //   else if (age == 17) {
  //     cout << "Next year you will be able to vote.";
  //   }
  //   // retiree
  //   else if (age > 70){
  //     cout << "I hope you are enjoying retirement.";
  //   }
  // }
  //
  // // closing
  // cout << "\n\nYours sincerely,\n\n";
  // cout << writer_name << "\n\n";

  // Exercise
  // convert miles to kilometers

  // prompt for input in miles
  // double miles {0.0};
  // cout << "Enter the number of miles: ";
  // cin >> miles;
  // // output the calculation
  // cout << miles << " miles = " << miles * 1.609 << " kilometers\n\n";

  // Exercise
  // do math on two numbers

  // double val1 {0};
  // double val2 {0};
  //
  // cout << "Enter a floating point number: ";
  // cin >> val1;
  //
  // cout << "Enter another floating point number: ";
  // cin >> val2;
  //
  // cout << "\nValue 1:" << val1 << " Value 2:" << val2 << "\n\n";
  // //smaller
  // if (val1 < val2){
  //   cout << val1 << " is smaller than " << val2 << "\n";
  // }
  // else if (val2 < val1){
  //   cout << val2 << " is smaller than " << val2 << "\n";
  // }
  // else {
  //   cout << val1 << " == " << val2 << "\n";
  // }
  // // larger
  // if (val1 > val2){
  //   cout << "\n" << val1 << " is larger than " << val2 << "\n";
  // }
  // else if (val2 > val1){
  //   cout << val2 << " is larger than " << val1 << "\n";
  // }
  // else {
  //   cout << val1 << " == " << val2 << "\n";
  // }
  // //sum
  // cout <<  val1 << " + " << val2 << " = " << val1 + val2 << "\n";
  // //difference
  // cout <<  val1 << " - " << val2 << " = " << val1 - val2 << "\n";
  // //product
  // cout <<  val1 << " * " << val2 << " = " << val1 * val2 << "\n";
  // //ratio
  // cout <<  val1 << " / " << val2 << " = " << val1 / val2 << "\n";

  // Exercise 6
  // sort three numbers

  // prompt for three numbers
  // int arr[3];
  // cout << "Enter three number seperated by spaces: ";
  // cin >> arr[0] >> arr[1] >> arr[2];
  //
  // // sort the array
  // int x {}; // temp var
  // for (int foo = 0; foo < 3; foo++){ // loop through the array
  //   for (int i = 0; i < 3; i++){ // check against each element of the array
  //     x = arr[i]; // assign to temp
  //     if (x > arr[i+1]) { // larger than next number
  //       arr[i] = arr[i+1]; // move the next value down
  //       arr[i+1] = x; // move temp to next value
  //     }
  //     else { // smaller than next number
  //       arr[i] = x; // assign to current element
  //     }
  //   }
  // }
  //
  // // print the array
  // cout << "[";
  // for (int i = 0; i < 3; i++){
  //   cout << arr[i];
  //   if (i < 2) cout << ",";
  // }
  // cout << "]";

  // // Exercise 7
  // // sort three strings
  //
  // // prompt for three strings
  // vector<string> arr;
  // string inString {};
  // cout << "Enter string 1: ";
  // cin >> inString;
  // arr.push_back(inString);
  // cout << "Enter string 2: ";
  // cin >> inString;
  // arr.push_back(inString);
  // cout << "Enter string 2: ";
  // cin >> inString;
  // arr.push_back(inString);
  // // sort the array
  // string x {}; // temp var
  // for (int foo = 0; foo < arr.size()-1; foo++){ // loop through the array
  //   for (int i = 0; i < arr.size()-1; i++){ // check against each element of the array
  //     x = arr[i]; // assign to temp
  //     if (x > arr[i+1]) { // larger than next number
  //       arr[i] = arr[i+1]; // move the next value down
  //       arr[i+1] = x; // move temp to next value
  //     }
  //     else { // smaller than next number
  //       arr[i] = x; // assign to current element
  //     }
  //   }
  // }
  // // print the array
  // for (int i = 0; i < arr.size(); i++){
  //   cout << arr[i];
  // }

  // // Exercise 8
  // // Test for odd or even integer
  //
  // int testInteger {};
  // cout << "Enter an integer: ";
  // cin >> testInteger;
  // string oddEven {" "};
  // if (testInteger%2 == 0) {
  //   oddEven = "even";
  // }
  // else {
  //   oddEven = "odd";
  // }
  // cout << "The value " << testInteger << " is " << oddEven << "\n";

  // // Exercise 9
  // // spell out numbers i.e. one, two, three
  //
  // string numString {};
  // while (true){
  //   cout << "Enter a number as a word: ";
  //   cin >> numString;
  //     if (numString == "one") {
  //       cout << "1";
  //     }
  //     else if (numString == "two") {
  //       cout << "2";
  //     }
  //     else if (numString == "three") {
  //       cout << "3";
  //     }
  //     else if (numString == "four") {
  //       cout << "4";
  //     }
  //     else if (numString == "five") {
  //       cout << "5";
  //     }
  //     else if (numString == "six") {
  //       cout << "6";
  //     }
  //     else if (numString == "seven") {
  //       cout << "7";
  //     }
  //     else if (numString == "eight") {
  //       cout << "8";
  //     }
  //     else if (numString == "nine") {
  //       cout << "9";
  //     }
  //     else if (numString == "ten") {
  //       cout << "10";
  //     }
  //     else {
  //       cout << "I don't know that number.";
  //     }
  //     cout << "\n\n";
  // }


  // // Exercise 10
  // // calculate operand and two args
  //
  // string operation {" "};
  // double arg1, arg2 {0,0};
  //
  // cout << "Enter an operation followed by two operands seperated by spaces: ";
  // cin >> operation >> arg1 >> arg2;
  //
  // if (operation == "+" || operation == "plus"){
  //   cout << arg1 << " " << operation << " " << arg2 << " = " << arg1 + arg2;
  // }
  // else if (operation == "-" || operation == "minus"){
  //   cout << arg1 << " " << operation << " " << arg2 << " = " << arg1 - arg2;
  // }
  // else if (operation == "*" || operation == "mul"){
  //   cout << arg1 << " " << operation << " " << arg2 << " = " << arg1 * arg2;
  // }
  // else if (operation == "/" || operation == "div"){
  //   cout << arg1 << " " << operation << " " << arg2 << " = " << arg1 / arg2;
  // }
  // cout << "\n\n";

  //Exercise 11








  keep_window_open();
  return 0;
}
