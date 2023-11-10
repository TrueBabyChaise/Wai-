#include <iostream>
#include <string>
#include "Logger/Logger.hpp"
#include "Parser/Parser.hpp"
#include "Token/Token.hpp"
#include "Utils/Utils.hpp"

int main(int argc, char **argv)
{
    WAI::Logger::log("Starting the interpreter...");
    if (argc < 2)
    {
        WAI::Logger::log("No input file specified, exiting.");
        return 1;
    }

    if (argc > 2)
    {
        WAI::Logger::log("Specify only one file, exiting.");
        return 1;
    }
    std::string inputFile;
    inputFile = argv[1];

    WAI::Logger::log("Input file specified (" + inputFile + "), starting the interpreter...");

    WAI::Logger::log("Reading file...");

    std::string content;

    try
    {
        content = WAI::Utils::get_file_content(inputFile);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    WAI::Logger::log("Parsing file...");

    WAI::Parser parser = WAI::Parser();

    std::map<int, WAI::Token> parsedContent = parser.parse(content);

    WAI::Logger::log("Parsed content");

    // Print all the tokens founds
    for (auto const& x : parsedContent)
    {
        std::cout << x.first  // string (key)
                  << ':'
                  << x.second.getValue() // string's value
                  << "/"
                  << x.second.getTypeString() // string's value
                  << std::endl ;
    }

    WAI::Logger::log("Executing file...");

    
    WAI::Logger::log("Interpreter Done.");
    return 0;
}