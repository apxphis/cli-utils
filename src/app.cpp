// basic libraries
#include <iostream>
#include <filesystem>
#include <string.h>

#include "./commands/directories.h"
#include "./commands/files.h"
#include "./commands/path.h"

using namespace std;

int main()
{
    cout << "welcome to the viatech cli utils!\n"; 
    cout << "here, you can do some stuff like: \n";
    cout << "[showpath/sp]: print your path!\n[fileinfo/fi]: print some file info!";
    cout << "[chfi/cf]: change file info\n[exit/e]: exit the program!";
}