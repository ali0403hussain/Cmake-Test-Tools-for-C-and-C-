#include <iostream>             //Input Output Stream Header file

#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>
#include <cxxopts.hpp>

#include "LibA.h"
#include "LibB.h"

#include "Config.hpp"

using namespace std;

int main()
{
    cout << "######## Project Info ###########" <<endl;
    cout << "Project Name: " <<project_name <<endl;
    cout << "Project Version: " <<project_version <<endl;
    cout << "Project Version Major: " <<project_version_major <<endl;
    cout << "Project Version Minor: " <<project_version_minor <<endl;
    cout << "Project Version Patch: " <<project_version_patch <<endl <<endl;
    cout << "nlohmann Lib Version: " <<NLOHMANN_JSON_VERSION_MAJOR 
                                     <<"."
                                     <<NLOHMANN_JSON_VERSION_MINOR
                                     <<"."
                                     <<NLOHMANN_JSON_VERSION_PATCH
                                     <<endl <<endl;
    cout << "fmt Version: " <<FMT_VERSION
                            <<endl <<endl;
    cout << "spdlog Version: " <<SPDLOG_VER_MAJOR 
                               <<"."
                               <<SPDLOG_VER_MINOR
                               <<"."
                               <<SPDLOG_VER_PATCH
                               <<endl <<endl;
    cout << "cxxopts Version: " <<CXXOPTS__VERSION_MAJOR 
                                <<"."
                                <<CXXOPTS__VERSION_MINOR
                                <<"."
                                <<CXXOPTS__VERSION_PATCH
                                <<endl <<endl;
    cout << "######## Project OutPut ###########" <<endl;
    cout << "Hello World " 
         << endl;
    PrintLibA();
    PrintLibB();
}