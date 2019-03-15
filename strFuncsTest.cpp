#include "strFuncs.h"
#include "tddFuncs.h"

int main() {
	startTestGroup("Anagrams");

	string wheat = "barley", close = "barely";
	assertEquals(true,
			isAnagram(wheat,close),
			"isAnagram(wheat,close)");

	string greet = "hello", leave = "goodbye";
	assertEquals(false,
			isAnagram(greet,leave),
			"isAnagram(greet,leave)");

	string wowWheat = "BaRley!!!!", mehClose = "BAREly...";
	assertEquals(true,
			isAnagram(wowWheat,mehClose),
			"isAnagram(wowWheat,mehClose)");

	string bat = "B A T", tab = "t.A.b.";
	assertEquals(true,
			isAnagram(bat,tab),
			"isAnagram(bat,tab)");

	string hello = "HELLO!", ello = "ello?";
	assertEquals(false,
			isAnagram(hello,ello),
			"isAnagram(hello,ello)");
	
	startTestGroup("Palindrome");

        string car = "Racecar";
        assertEquals(true,
                        isPalindrome(car),
                        "isPalindrome(car)");

	string mam = "madam";
        assertEquals(true,
                        isPalindrome(mam),
                        "isPalindrome(mam)");

        string cheese = "cheese";
        assertEquals(false,
                        isPalindrome(cheese),
                        "isPalindrome(cheese)");

        string tar = "tar";
        assertEquals(false,
                        isPalindrome(tar),
                        "isPalindrome(tar)");

        string red = "redder";
        assertEquals(true,
                        isPalindrome(red),
                        "isPalindrome(red)");
	return 0;
}
