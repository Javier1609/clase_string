#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string s1;
    string s2 = "";

    string s3 = "Hello Ruben";
    string s4(s3);


    string s5(s3.begin(),s3.end());
    string s6(s3,0,s3.length());
    cout << s1 << " " << s2 << endl;
    cout << s3 << " " << s4 << endl;
    cout << s5 << " " << s6 << endl;

    return 0;
}