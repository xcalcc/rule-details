#include <iostream>
#include <csignal>
using namespace std;

// use C signature
extern \"C\" void handle_signal(int signum)
{
 cout << \"Signal to interrupt \" << signum << endl;
 exit(signum);
}

int main() 
{
 signal(SIGINT, handle_signal);
 // ....

}