#include <iostream>             //Input Output Stream Header file
#include "LibA.h"
#include "LibB.h"
#include <nlohmann/json.hpp>
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
    cout << "######## Project OutPut ###########" <<endl;
    cout << "Hello World " 
         << endl;
    PrintLibA();
    PrintLibB();
}