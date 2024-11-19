#include <iostream>
#include "modifie.h"

using namespace std;


// warnning : 
// " — " doesnt work not this " - " .
// if u wanna put word between (' ') put space between the letter and '
// example : ' hi guys ' 


int main ()
{
string sentence ;


cout << " ****** warnning : " << endl 
<< "( — ) doesnt work not this --> ( - )" << endl
<< " if u wanna put word between (' ') put space between the letter and (') " << endl
<< " example : ' hi guys ' " << endl 
<< endl ;

std:: cout << " etner please your text : ";
getline(cin , sentence );
text_into_capitale(sentence);
text_into_noncapitale(sentence);
first_capitale(sentence);
how_many(sentence);
word_count(sentence);
return 0;
}      