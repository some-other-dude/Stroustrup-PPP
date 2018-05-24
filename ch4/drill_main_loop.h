/*!
 *    file drill_main_loop.h
 *    brief main event loop function for drill2.cpp
 *    author Bob King
 *    date 24May2018
 *    compiler: g++ -std=gnu++11 -Wall
*/

/*!
 *  brief main loop of the app
 *  param none
 *  pre none
 *  post none
 *  return void
*/
void main_loop(){

  vector<myItem> items {}; // list of items entered

  double length_temp {0}; // temp double
  string unit_temp {""}; // temp string
  double sum {0}; // running total of units
  double largest {0}; // largest entry in meters
  double smallest {0}; // smallest entry in meters
  const vector<string> VALID_UNITS {"cm", "m", "in", "ft","CM", "M", "IN", "FT"};

  prompt(); // initial prompt for input

  while (cin >> length_temp >> unit_temp){
    print_entry(length_temp, unit_temp); // print the entry to the screen
    // check for valid units.  reject if invalid
    if (is_valid_unit(unit_temp, VALID_UNITS)){
      // add the units to the list
      myItem item;
      item.raw_length = length_temp;
      item.unit = unit_temp;
      item.meters = convert_to_meters(length_temp, unit_temp);


      // init largest/smallest
      if (items.size() == 0) {
        largest = item.meters;
        smallest = item.meters;
      }

      items.push_back(item);

      sum += item.meters;
      largest = check_for_largest(item, largest);
      smallest = check_for_smallest(item, smallest);

    }

    prompt(); // prompt the user for input


  }

  // cleanup to exit from loop
  exit_stats(smallest, largest, sum, items);
}
