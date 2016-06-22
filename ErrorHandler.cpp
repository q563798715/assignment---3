#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include"ErrorHandler.h"
using namespace std;

ErrorHandler::ErrorHandler(char const filename[]) {
    
    outfile = fstream(filename);
    
    outfile << filename << " opened"  << endl;
}

ErrorHandler::~ErrorHandler(){
    
}

string ErrorHandler:: errormessage (){
    
    return "Error ";
}

void ErrorHandler::warn(char const message[], enum error errornum){
    
    string x (message);
    
    x.erase(0,9);
    
    cout << errormessage() << errornum << x << endl;
    
    outfile << message << endl;
    
}


void ErrorHandler::terminate(char const message[] , enum error errornum){
    
    string x (message);
    
    x.erase(0,9);
    
    cout << errormessage() << errornum << x << endl;
    
    outfile << message << endl;
    
    exit(1);
    
}
