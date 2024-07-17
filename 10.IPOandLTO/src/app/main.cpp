#include <iostream>             //Input Output Stream Header file

#include "LibA.h"
#include "Config.hpp"

using namespace std;

void foo4(void) {
  cout << "Hello I am Foo4\n";
}

int main()
{
    cout << "######## Project Info ###########" <<endl;
    cout << "Project Name: " <<project_name <<endl;
    cout << "Project Version: " <<project_version <<endl;
    cout << "Project Version Major: " <<project_version_major <<endl;
    cout << "Project Version Minor: " <<project_version_minor <<endl;
    cout << "Project Version Patch: " <<project_version_patch <<endl <<endl;
    cout << "######## Project OutPut ###########" <<endl;
    cout << "Hello World " 
         << endl;

    int Result = foo1();
    
    return 0;
}