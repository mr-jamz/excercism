#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message-------------------------------
        // locate beginning of message, add 2 to start at beggining of message
        int colon = line.find(":") + 2;
        // return substring starting at beginning of message
        std::string newString = line.substr(colon);
        return newString;
    }

    std::string log_level(std::string line) {
        // return the log level-----------------------------
        // find the brackets and adjust by 1, up and down, to exclude them from substring
        int openBracket = line.find("[") + 1;
        int closeBracket = line.find("]") - 1;
        return line.substr(openBracket, closeBracket);
    }

    std::string reformat(std::string line) {
        // return the reformatted message-------------------
        /* More work
        std::string mess = message(line);
        std::string log = log_level(line);
        return mess + " (" + log + ")";
        */
        // Less work vvv
        return message(line) + " (" + log_level(line) + ")";
    }
}
