/*!
 *   file "Drill2.cpp"
 *   brief rewrite of drill.cpp
 *   author Bob King
 *   date 24 May 2018
*/

#include "../std_lib_facilities.h"
#include "./drill_utils.h"
#include "./drill_main_loop.h"


/*!
 *   brief main()
 *   param none
 *   pre none
 *   post none
 *   return 0 if sucessful
*/
int main () {

  main_loop();



  keep_window_open(); // from Stroustrup PPP
  return 0;
}
