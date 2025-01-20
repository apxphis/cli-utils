// basic libraries
#include <iostream>
#include <filesystem>
#include <string.h>
#include <map>

// our command files
#include "./commands/directories.h"
#include "./commands/files.h"
#include "./commands/path.h"
#include "./commands/exit.h"

using namespace std;

// main program that will run
int main()
{
    // all available commands 
    cout << "welcome to the viatech cli utils!\n"; 
    cout << "here, you can do some stuff like: \n";
    cout << "[showpath/sp]: print your path!\n[fileinfo/fi]: print some file info!";
    cout << "[chfi/cf]: change file info\n[exit/e]: exit the program!";
}

/*
TODO:
 - add functionaility to all commands shown in the options
 - figure out how to use <filesystem>
*/