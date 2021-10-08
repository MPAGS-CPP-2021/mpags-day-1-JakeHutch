#include <iostream>
#include <string>
#include <cctype>
#include <vector>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc }; 

    long unsigned int length { cmdLineArgs.size() };
    for (int i{1}; i < length; ++i)  // this wont print the code name itself, just the arguements 
    {   
        //std::cout << cmdLineArgs[i] << "\n";

        if (cmdLineArgs[i] == "--help" || cmdLineArgs[i]== "-h")
        {
            std::string help_msg {"This code applies a simple classical cipher to a string of input data."};
            std::cout << help_msg << "\n";
            return 0;
        }

        if (cmdLineArgs[i] == "--version" )
        {
            std::string help_msg {"version : v0.1.0"};
            std::cout << help_msg << "\n";
            return 0;
        }        

        if (cmdLineArgs[i] == "-i" )
        {
            if ((i+1) < length) // check that there is another arguement provided 
            {
                std::string input_file {cmdLineArgs[i+1]}; // store the filename 
                std::cout << "Input file : " + input_file <<"\n";
            } else
            {
                std::cout << "ERROR : No input file provided"  <<"\n";
                return 0;  // if not then end the code 
            }

        }
        if (cmdLineArgs[i] == "-o" )
        {
            if ((i+1) < length) // check that there is another arguement provided 
            {
                std::string output_file {cmdLineArgs[i+1]}; // store the filename 
                std::cout << "Output file : " + output_file <<"\n";
            } else
            {
                std::cout << "ERROR : No output file provided"  <<"\n";
                return 0;  // if not then end the code 
            }

        }        
    }


    char in_char{'x'};
    std::string outstr {""};
    while(std::cin >> in_char)
    {
        // Loop until the user
        // presses Enter then Ctrl+D
        if (std::isalpha(in_char)){
            outstr += std::toupper(in_char);
        }

        
        switch (in_char){
            case '0':
                outstr +="ZERO";
                break;
            case '1':
                outstr +="ONE";
                break;
            case '2':
                outstr +="TWO";
                break;
            case '3':
                outstr +="THREE";
                break;
            case '4':
                outstr +="FOUR";
                break;
            case '5':
                outstr +="FIVE";
                break;
            case '6':
                outstr +="SIX";
                break;
            case '7':
                outstr +="SEVEN";
                break;
            case '8':
                outstr +="EIGHT";
                break;
            case '9':
                outstr +="NINE";
                break;
            //default:
            //    outstr +=in_char;
            //    break;
        }

    }
    std::cout << outstr << "\n";
}