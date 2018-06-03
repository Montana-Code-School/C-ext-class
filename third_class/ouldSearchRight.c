#include <stdio.h>
#define MAXLINE 1000   /* maximum line output length */

int retline(char line[], int max);
int strindex(char source[], char searchfor[]);
int getlength(char str[]);
int fastgetlength(char str[], int lower, int upper);

char pattern[] = "ould"; /* pattern to match for */
char search[] = "asdf My soul would leave if it could"; /* search pattern */

/* find all lines matching patterns */
int main()
{
    printf("%d\n", fastgetlength(search, 0, MAXLINE));
    return 1; 
}

/* getline: get line into s, return length */
int retline(char s[], int lim)
{
  int c, i;
 
  i = 0;
  while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

int fastgetlength(char str[], int lower, int upper)
{
  int midpoint = ((upper - lower) / 2) + lower;
  while(1) {
    if( str[midpoint] != '\0' && str[midpoint + 1] == '\0')
    {
      return midpoint;
    }
    if(str[midpoint] == '\0')
    {
      upper = midpoint;
    } else {
      lower = midpoint;
    }
    midpoint = ((upper - lower) / 2) + lower;
  } 
}

/* getlength of the array */
int getlength(char str[]) {
   int i = 0;
   while(str[i] != '\0')
     i++;
   return i;  
}

/* strindex: return index of t in s, -1 is none */
int strindex(char s[], char t[])
{
  int i, j, k;

  for( i = 0; s[i] != '\0'; i++) {
    for(j=i, k=0; t[k] != '\0' && s[j]==t[k]; j++, k++)
      ;
      if(k > 0 && t[k] == '\0')
        return i;
  }
  return -1;
}

