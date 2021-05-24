#ifndef YouGotHufflepuff_Included
#define YouGotHufflepuff_Included

#include <map>
#include <string>
#include <iostream>

/* Type: Question
 *
 * Type representing a personality quiz question.
 */
struct Question {
    std::string questionText; // Text of the question
    std::map<char, int> factors;   // Map from factors to +1 or -1
};

/* Type: Person
 *
 * Type representing a person, used to represent people when determining
 * who's the closest match to the user.
 */
struct Person {
    std::string name;      // Name of the person
    std::map<char, int> scores; // Map from factors to +1 or -1
};




/* Everything below this point is designed to make C++ play nicely with
 * the custom types we defined here. Feel free to check these out if you're
 * curious, and take CS106L if you want to learn more!
 */

/* Functions to read or write questions and people to/from a stream. */
std::istream& operator>> (std::istream& in, Question& toRead);
std::istream& operator>> (std::istream& in, Person& toRead);
std::ostream& operator<< (std::ostream& out, const Question& toWrite);
std::ostream& operator<< (std::ostream& out, const Person& toWrite);

/* Relational operators for questions and people; used internally by the Map and Set. */
bool operator< (const Question& lhs, const Question& rhs);
bool operator< (const Person& lhs,   const Person& rhs);

/* Comparison operators for questions and people; used by the test driver. */
bool operator== (const Question& lhs, const Question& rhs);
bool operator!= (const Question& lhs, const Question& rhs);

bool operator== (const Person& lhs, const Person& rhs);
bool operator!= (const Person& lhs, const Person& rhs);

#endif
