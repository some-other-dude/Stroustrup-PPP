/*!
 *    file "drill.cpp"
 *    brief "Stroustrup PPP Ch4 Drill"
 *    author "Bob King"
 *    date "23 May 2018"
 *    compiler: g++ -std=gnu++11 -Wall
 *    This program compiles and runs on MacOS 10.13.4
*/

#include "../std_lib_facilities.h"

int main_loop();
void print_doubles(double double1, double double2);
void print_larger_smaller(double double1, double double2);
void prompt();
void almost_equal(double double1, double double2);
double check_smallest(double d1, double ssf);
double check_largest(double d1, double lsf);

/*!
 *    brief main()
 *    param none
 *    pre none
 *    post none
 *    return 0 if sucessful
*/
int main () {
  int exit_code {0};
  exit_code = main_loop();

  keep_window_open(); // from Stroustrup PPP
  return exit_code;
}

// FUNCTIONS

/*!
 *    brief "main_loop()"
 *    param "none"
 *    pre "none"
 *    post "none"
 *    return "returns 0 for success, 1 for failure"
*/
int main_loop(){
  double double1, double2 {0};
  double largest_so_far, smallest_so_far, sum {0};
  int count = 0;

  prompt();// initial prompt

  while (cin >> double1){
    ++count;
    sum += double1;

    print_doubles(double1, double2);

    if (double1 == double2){
      cout << "        The numbers are equal" << "\n";
    }
    else {
      print_larger_smaller(double1, double2);
      almost_equal(double1, double2);
    }

    smallest_so_far = check_smallest(double1, smallest_so_far); // test for smallest so far
    largest_so_far = check_largest(double1, largest_so_far); // test for largest so far

    double2 = double1;

    prompt();
  }

  return 0;
}

/*!
 *    brief "print_doubles()"
 *    param "two doubles to print"
 *    pre "none"
 *    post "none  "
 *    return "none"
*/
void print_doubles(double double1, double double2){
  cout << "   Current: " << double1
  << "\n   Last: "  << double2
  << "\n";
}

/*!
 *    brief "classify larger and smaller ints and print out"
 *    param "two ints to classify"
 *    pre "none"
 *    post "none"
 *    return "void"
*/
void print_larger_smaller(double double1, double double2){
  double large = double1;
  double small = double2;

  if (double1 < double2){ // test for largest
    large = double2;
    small = double1;
  }

  cout << "        The smaller value is " << small << "\n";
  cout << "        The larger value is " << large << "\n";
}

/*!
 *    brief "print a prompt to enter two ints"
 *    param "none"
 *    pre "none"
 *    post "none"
 *    return "void"
*/
void prompt(){
  cout << "\n\n  '|' to exit.  Enter a double: ";
}

/*!
 *    brief "test for almost almost_equal"
 *    param "two doubles to classify"
 *    pre "The doubles must be unequal"
 *    post "none"
 *    return "void"
*/
void almost_equal(double double1, double double2){
  double diff = double1 - double2; // get the difference
  double largest = double2;
  if (double1 > double2) largest = double1; //find the largest
  double percent = diff/largest; // calc % diff
  if (percent < 0) percent *= -1;
  if (percent < 0.01){
    cout << "The numbers are almost equal (" << percent * 100 << "%)";
  }
}

/*!
 *    brief "test for and track smallest so far"
 *    param "a double to test"
 *    pre "none"
 *    post "none"
 *    return "void"
*/
double check_smallest(double d1, double ssf){
  if (d1 <= ssf){
     ssf = d1;
     cout << "        " << d1 << " is the smallest so far" << "\n";
   }
   return ssf;
}

/*!
 *    brief "test for and track largest so far"
 *    param "a double to test"
 *    pre "none"
 *    post "none"
 *    return "void"
*/
double check_largest(double d1, double lsf){
  if (d1 >= lsf) {
    lsf = d1;
    cout << "        " << d1 << " is the largest so far" << "\n";
  }
  return lsf;
}
