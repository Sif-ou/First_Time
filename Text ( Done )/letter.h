#include <string>

struct node
{
  char info ;
  node* next ;
};
typedef node* box ;

const int letters = 25 ;
const int sc = 39 ;

char non_capitale[] = { 'a' , 'b' , 'c' , 'd' , 'e' ,'f' , 
               'g' , 'h' , 'i' , 'j' , 'k'
              ,'l' , 'm' ,'n' , 'o' ,'p' ,'q' , 'r' , 's' , 't' , 'u'
              ,'v' ,'w' , 'x', 'y' , 'z' 
             } ;

char capitale[] = { 'A' , 'B' , 'C' , 'D' , 'E' ,'F' , 
               'G' , 'H' , 'I' , 'J' , 'K'
              ,'L' , 'M' ,'N' , 'O' ,'P' ,'Q' , 'R' , 'S' , 'T' , 'U'
              ,'V' ,'W' , 'X', 'Y' , 'Z'     
                  } ;


char special_char [] = { ' ', '0','1','2','3','4','5','6','7','8','9',
 '&' , '"' ,  '\'' ,  '@' , '|' , ';' , ',' , ':' , '/' ,   '\\' , 
 '{' , '}' , '%' , '~' , '#' , '*' ,'+' ,'-' , '(' , ')' , '=' ,
 '[' , ']' ,'<' , '>' , '?' , '!' ,  '.' , '_' } ; 


int letter_finder ( char l) // letter rank in capitale  and non capitale                         
{
int i , c ;
 for (i = 0 ; i <= letters ; i++ )
  {
   if( l == non_capitale[i] || l == capitale[i] )
      { 
       c = i ;
      }
  }
return c; 
}


bool checker (char s)
{
 int i ;
    
    for ( i = 0 ; i <= sc ; i++ )
      {
        if ( s == special_char[i] )
        {
            return false ;
        }
      }

 return true ;

}


char letter_capitale ( char s )
{
   s = capitale[letter_finder(s)];
   return s ;
}

char letter_noncapitale (char s)
{
   s = non_capitale[letter_finder(s)];
   return s ; 
}

