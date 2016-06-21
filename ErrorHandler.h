#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H
class ErrorHandler{
private:
    
    std::fstream outfile;
    
public:
    
    enum error { error1 = 10 , error2 = 20, error3 = 30};
    
    ErrorHandler(char const filename[]);
    
    ~ErrorHandler();
    
    std::string errormessage ();
    
    void warn(char const message[], enum error errornum);
    
    
    void terminate(char const message[] , enum error errornum);
};
#endif
