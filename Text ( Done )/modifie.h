#include <iostream>
#include <string>
#include "letter.h"

using namespace std;

void display ( string s)
{
std:: cout << endl << endl  << " " << s << endl << endl  ;            
}

void text_into_capitale ( string se )
{
 int i ;
    
   for ( i = 0 ; i <= se.length() ; i++ )
     { if( checker (se[i]))
       se[i] = letter_capitale(se[i]);
     }

display(se);
}

void text_into_noncapitale ( string se )
{
 int i ;
    
   for ( i = 0 ; i <= se.length() ; i++ )
     { if( checker (se[i]))
       se[i] = letter_noncapitale(se[i]);
     }

display(se);
}

void first_capitale ( string se )
{
int i ;
 if( checker(se[0]) )
 se[0]  =letter_capitale(se[0]);


   for ( i = 1 ; i <= se.length() ; i++)
     {
        if ( checker ( se[i] ) == true && checker ( se[i-1]) == false && (checker (se[i+1]) == true || se[i+1] == '\'') )
         {
            se[i] = letter_capitale(se[i]) ;
         }
     }

     


display(se);
}

// warnning : 
// " — " doesnt work not this " - " .
// if u wanna put word between (' ') put space between the letter and (')
// example : ' hi guys ' .

void how_many ( string se) // // dont forgot to read the warnnig above :)  
{
 int l = -1 , i ;


 
          for ( i = 0 ; i <= se.length() ; i++ )
            { 
             if( checker (se[i]) )
               l++;  
            }


std:: cout << " characters : " << se.length() <<endl  
           << " letters : " << l <<endl;
}

void word_count ( string se )   // dont forgot to read the warnnig above :)        
{
   int i , words = 0 , s ;
    s = se.length();
se = se + " " ;
         for ( i = 1 ; i <= s; i++ )
          {        
             if (  ( ( checker ( se[i] ) == false ) && se[i] != '\'') && checker(se[i-1]) == true )
              words++;  
          }
std:: cout << " words : " << words << endl;

}

