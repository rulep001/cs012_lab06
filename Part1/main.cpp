#include <iostream>

using namespace std;

char * mystrcat (char * destination, const char * source);

int main() {
   char cstr1[80];
   char cstr2[80];

   cstr1[0] = 'L';
   cstr1[1] = 'i';
   cstr1[2] = 'o';
   cstr1[3] = 'n';
   cstr1[4] = 'e';
   cstr1[5] = 'l';
   cstr1[6] = '\0';

   cstr2[0] = 'M';
   cstr2[1] = 'e';
   cstr2[2] = 's';
   cstr2[3] = 's';
   cstr2[4] = 'i';
   cstr2[5] = '\0';

   cout << cstr1 << endl;
   cout << cstr2 << endl;

   mystrcat(cstr1, " ");
   mystrcat(cstr1, cstr2);

   cout << cstr1 << endl;

   return 0;
}

char * mystrcat (char * destination, const char * source) {
    unsigned i = 0;
    while (destination[i] != '\0') {
        ++i;
    }
    
    unsigned length = 0;
    while (source[length] != '\0') {
        ++length;
    }
    
    unsigned j = 0;
    while (source[j] != '\0') {
        destination[i] = source[j];
        ++i;
        ++j;
    }
    
    destination[i] = '\0';
    
    return destination;
}