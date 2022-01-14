#ifndef STRING_HELPERS_H
#define STRING_HELPERS_H

#include <string>
#include <vector>
#include <sstream>

namespace grabyo::stringHelpers{

    inline std::vector<std::string> splitString(std::string s, const char delimiter)
    {
        std::stringstream ss (s);
        std::string token;
        std::vector<std::string> ans;

        while(std::getline(ss, token, delimiter)){
            ans.push_back(token);
        }

        return ans;
    }

}

#endif