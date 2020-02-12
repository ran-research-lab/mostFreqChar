// Rafael A. Arce Nazario
//
// Cliente con pruebas para la clase Racional

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
using namespace std;

const int lcRangeSize = 'z' - 'a' + 1;

// Given a string st of lower case letters, returns the most common character in the string.
// If there is more than one most frequent character, returns the null char `\0'

char mostFreqChar(const string &st) {

    // create an initialize the direct address table
    int A[lcRangeSize] = {0};

    // traverse the string, counting the frequency of the letters
    for (auto c: st) {
        A[c - 'a']++;
    }

    for (int i = 0; i < lcRangeSize; i++) cout << A[i] << " ";
    cout << endl;
}

TEST_CASE("mostFreqChar", "[mostFreqChar]") {
    REQUIRE(mostFreqChar("aaa") == 'a');
    REQUIRE(mostFreqChar("") == '\0');
    REQUIRE(mostFreqChar("bobolon") == 'o');
    REQUIRE(mostFreqChar("apestosas") == 's');
    REQUIRE(mostFreqChar("apestosa") == '\0');
    REQUIRE(mostFreqChar("zorra") == 'r');
    REQUIRE(mostFreqChar("uxyzabcdefghijklmnopqrstu") == 'u');
}