#include <iostream>
#include <string>
#include <vector>
#include "Logger/Logger.hpp"
#include "Parser/Parser.hpp"
#include "Token/Token.hpp"
#include "Utils/Utils.hpp"
#include "AST/AST.hpp"
#include "AST/NODE/ASTNode.hpp"

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

    std::vector<WAI::Token> parsedContent = parser.parse(content);

    WAI::Logger::log("Parsed content");

    // Print all the tokens founds
    for (auto const& token : parsedContent)
    {
        std::cout << token.getValue() << "/" << token.getTypeString() << std::endl;
    }

    WAI::Logger::log("Building AST...");

    WAI::AST ast = WAI::AST();

    int index = 0;
    WAI::NODE::ASTNode* astRoot = ast.buildAST(parsedContent, index);

    WAI::Logger::log("AST built.");

    WAI::Logger::log("Evaluating AST...");

    int result = astRoot->evaluate();

    WAI::Logger::log("Result: " + std::to_string(result));
    
    WAI::Logger::log("Interpreter Done.");
    return 0;
}