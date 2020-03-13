/****************************************************************************************
 * repsvr_main - A replication server that receives drone information from an "antenna" and
 *               replicates that information to other servers. The antenna is simulated by
 *               a separate thread that will be updating the database
 *
 *              **Students should not modify this code! Or at least you can to test your
 *                code, but your code should work with the unmodified version
 *
 ****************************************************************************************/  

#include <stdexcept>
#include <iostream>
#include <getopt.h>
#include <pthread.h>
#include <signal.h>

#include "DivFinderSP.h"

using namespace std; 


/*****************************************************************************************
 * displayHelp - Shows command line parameters to the user.
 *****************************************************************************************/

void displayHelp(const char *execname) {
   std::cout << execname << " <sim_data>\n";
   std::cout << "   a: IP address to bind the server to (default: 127.0.0.1)\n";
   std::cout << "   p: Port to bind the server to (default: 9999)\n";
   std::cout << "   t: time multiplier - t=2.0 runs the sim at 2x speed\n";
   std::cout << "   o: the file to write the DB dump CSV to (default: replication_db.cv)\n";
   std::cout << "   d: duration - seconds in \"sim time\" to run the sim\n";
   std::cout << "   v: verbosity - how much information to send to stdout (0-3, 3=max)\n";
}


int main(int argc, char *argv[]) {

    DivFinderSP d(123456);
    LARGEINT l = 111111111;
    std::cout << d.isPrimeBF(9999999, l);


//    // ****** Initialization variables ******
//    // time_mult - speeds up the simulation by the multiplier (2.0 runs twice as fast)
//    float time_mult = 1.0;
//    unsigned int verbosity = 0;
//    int sim_time = 900; // Default 900 seconds
//    std::string ip_addr = "127.0.0.1";
//    unsigned short port = 9999;

//    // Filename to write the replication output
//    std::string outfile("replication_db.csv");
//    std::string simdata_file;

//    // Get the command line arguments and set params appropriately
//    // The - at the beginning of our getopt optstring means that the inject database file
//    // will appear in case 1
//    unsigned long portval;
//    int c = 0;
//    while ((c = getopt(argc, argv, "-o:t:v:d:p:a:")) != -1) {
//       switch (c) {

//       // The inject database file specified in the command line
//       case 1: 
//          simdata_file = optarg;
//          break;

//       // Set the max number to count up to
//       case 'p':
//          portval = strtol(optarg, NULL, 10);
//          if ((portval < 1) || (portval > 65535)) {
//             std::cout << "Invalid port. Value must be between 1 and 65535";
//             std::cout << "Format: " << argv[0] << " [<max_range>] [<max_threads>]\n";
//             exit(0);
//          }
//          port = (unsigned short) portval;
//          break;

//       // IP address to attempt to bind to
//       case 'a':
//          ip_addr = optarg;
//          break;

//       // time multiplier
//       case 't':
//          time_mult = strtof(optarg, NULL);
//          if (time_mult <= 0.0) {
//             std::cerr << "Invalid time multiplier. Must be > 0.\n";
//             exit(0);
//          }
//          break;

//       // Set the max number to count up to
//       case 'v':
//          verbosity = (unsigned int) strtol(optarg, NULL, 10);
//          if (verbosity > 3){
//             std::cerr << "Invalid verbosity. Range: 0-3 where 3 is max\n";
//             exit(0);
//          }
//          break;

//       // Set the max number to count up to
//       case 'd':
//          sim_time = (int) strtol(optarg, NULL, 10);
//          if ((sim_time <= 1) || (sim_time > 1000)){
//             std::cerr << "Invalid sim_time. Range: 1 to 1000\n";
//             exit(0);
//          }
//          break;

//       // IP address to attempt to bind to
//       case 'o':
//          outfile = optarg;
//          break;

//       case '?':
//               displayHelp(argv[0]);
//               break;

//       default:
//               std::cout << "Unknown command line option '" << c << "'\n";
//               displayHelp(argv[0]);
//               break;
//       }

//    }

   
   return 0;
}
