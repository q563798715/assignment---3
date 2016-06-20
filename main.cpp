#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include"ErrorHandler.h"
using namespace std;


int main() {
    
    ErrorHandler h("log.txt");
    
    h.warn("Error 10: this is your first warning", ErrorHandler::error1);
    h.warn("Error 20: I warned you", ErrorHandler::error2);
    h.terminate("Error 30: Told you so.", ErrorHandler::error3);
    
    return 0;
}
