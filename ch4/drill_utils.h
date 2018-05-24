/*!
 *    file drill_utils.h
 *    brief utility functions for drill2.cpp
 *    author Bob King
 *    date 24May2018
 *    compiler: g++ -std=gnu++11 -Wall
*/


struct myItem {
  double raw_length = 0;
  string unit = "";
  double meters = 0;
} ;


/*!
 *   brief prompt the user for input
 *   param none
 *   pre none
 *   post none
 *   return void
*/
void prompt(){
  cout << "\n" << "Enter a length and a unit (cm,m,in,ft): ";
}

/*!
 *   brief print out the raw data the user enters
 *   param double for the scalar length and string for the unit of measure
 *   pre user has entered a double and a string
 *   post none
 *   return void
*/
void print_entry(double length_temp, string unit_temp){
  cout << "You entered " << length_temp << unit_temp << "\n";
}


/*!
 *   brief check for valid VALID_UNITS
 *   param string containing user input units
 *   pre none
 *   post none
 *   return bool
*/
bool is_valid_unit(string u, vector<string> VALID_UNITS){
  for (string vu : VALID_UNITS){
    if (u == vu) {
      return true;
      cout << "valid unit";
    }
  }
  cout << "'" << u
  << "' is an invalid unit.  Please try again..."
  << "\n\n";
  return false;
}


/*!
 *   brief convert scalar length to meters based on unit of measure
 *   param l = length, u = units
 *   pre u/m has been validated with is_valid_unit()
 *   post none
 *   return <double> length converted to meters
*/
double convert_to_meters(double length, string unit){
  if (unit == "m" || unit == "M") return length;
  if (unit == "cm" || unit == "CM") return length * .01;
  if (unit == "in" || unit == "IN") return length * .0254;
  if (unit == "ft" || unit == "FT") return length * .3048;
  return 0;
}


/*!
 *   brief see if the current item is the largest so far
 *   param double item = current item, vector items = list of items
 *   pre none
 *   post none
 *   return the meters value of largest item so far
*/
double check_for_largest(myItem item, double largest){
  if (item.meters >= largest) {
    cout << item.meters << "m is the largest so far\n";
    return item.meters;
  }
  return largest;

}

/*!
 *   brief see if the current item is the smallest so far
 *   param double item = current item, vector items = list of items
 *   pre none
 *   post none
 *   return the meters value of smallest item so far
*/
double check_for_smallest(myItem item, double smallest){
  if (item.meters <= smallest) {
    cout << item.meters << "m is the smallest so far\n";
    return item.meters;
  }
  return smallest;

}


/*!
 *    brief print out a summary after the user exits the loop
 *    param smallest, largest, sum are doubles, items is a reference to the items vector
 *    pre User exits the loop the loop
 *    post none
 *    return void
*/
void exit_stats(double smallest, double largest, double sum, vector<myItem>& items){
    int size = items.size();

    cout << "\n\n";
    if (size == 1){
        cout << "Only 1 item was entered" << "\n";
    }
    else {
        cout << "There were " << items.size() <<  " items entered" << "\n";
    }
    cout << "The largest item entered was " << largest << " meters" << "\n";
    cout << "The smallest item entered was " << smallest <<  " meters" << "\n";
    cout << "The sum of all items entered is " << sum  << " meters" << "\n";
    cout << "\n\n";
}
