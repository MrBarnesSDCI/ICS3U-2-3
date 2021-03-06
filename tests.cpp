// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

//TESTS

TEST_CASE("Exercise One") //Named ExerciseOne, tagged with example
{
    
    CHECK(exerciseOne(0)=='F');
    CHECK(exerciseOne(49)=='F');
    CHECK(exerciseOne(50)=='D');
    CHECK(exerciseOne(55)=='D');
    CHECK(exerciseOne(59)=='D');
    CHECK(exerciseOne(60)=='C');
    CHECK(exerciseOne(63)=='C');
    CHECK(exerciseOne(69)=='C');
    CHECK(exerciseOne(70)=='B');
    CHECK(exerciseOne(75)=='B');
    CHECK(exerciseOne(79)=='B');
    CHECK(exerciseOne(80)=='A');
    CHECK(exerciseOne(90)=='A');
    CHECK(exerciseOne(100)=='A');
    CHECK(exerciseOne(-1)=='E'); 
    CHECK(exerciseOne(101)=='E');   
}

TEST_CASE("Exercise Two")
{
    CHECK(exerciseTwo("SAINTS")==1);
    CHECK(exerciseTwo("saints")==0);
    CHECK(exerciseTwo("COMPUTER")==1);
    CHECK(exerciseTwo("Computer")==0);
    CHECK(exerciseTwo("hat")==0);
}

TEST_CASE("Exercise Three")
{
    CHECK(exerciseThree("Hello world", "Hello")=="found at 0");
    CHECK(exerciseThree("There is a snake in my boot", "snake")=="found at 11");
    CHECK(exerciseThree("Today is the longest day", "day")=="found at 2");
    CHECK(exerciseThree("Hello world", "bye")=="not found");
}


// Notes for teacher: 
// can use variables and libraries
// can use logic operators and loops
// you can run a specific test by using ./tests <TEST CASE NAME HERE>


