/*
On my honour, I pledge that I have neither received nor provided improper assistance
in the completion of this assignment.
Signed: __김건휘__ Student Number: __21700063__
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
 // Use setvbuf() to prevent the output from buffered on console.
 // setvbuf(stdout, NULL, _IONBF, 0);
 string str;
 // no input argument
 if(argc==1){
   while(1){
     cout << "Enter a name: ";
     getline(cin, str);
     if(str.size()!=0){cout << "Hello " << str << "!" << endl;}
     else{cout << "Hello World!\n"; break;}
   }
 }
 // if argument is in command-line
 else{
   for (int i = 1; i < argc; i++){
          cout << "Hello " << argv[i] << "!\n";
   }
   cout << "Hello World!\n";
 }
 // Use system("pause") to prevent the terminal from disappearing
 // as soon as the program terminates as in Visual Studio sometimes.
 // system("pause");
 return EXIT_SUCCESS;
}
