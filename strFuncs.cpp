#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  string x = s1, y = s2;
  for(int i = 0, j = 0; i < y.length() or j < x.length(); i++, j++) {
	  x[j] = tolower(x[j]);
	  y[i] = tolower(y[i]);
	  // converts string to lowercase
	  if(isalpha(y[i]) == 0) {
		  y.erase(i,1);
		  i = 0;
	  }
	  if(isalpha(x[j]) == 0) {
		  x.erase(j,1);
		  j = 0;
	  }
	  // deletes chars that are not alphabetical
  }
  if(x.length() == y.length()) {
	  for(int j = 0; j < x.length(); j++) {
		  if((int) y.find(x[j]) == -1) {
			  return false;
			  break;
		  } else {
			  y.erase(y.find(x[j]),1);
			  // erases characters in y found in x
		  }
	  }
  } else {
	  return false;
  }
  if(y.length() == 0) {
  	return true;
  } else {
	  return false;
  }
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  string z = s1, x;
  int len = s1.length();
  for(int i = len - 1; i >= 0; i--) {
	  z[i] = tolower(z[i]);
	  x += z[i];
  }
  if(z == x) {
	  return true;
  } else {
	  return false;
  }
}


