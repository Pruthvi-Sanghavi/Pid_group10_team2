## Basic running guide

# C++ Boilerplate
[![Build Status](https://travis-ci.org/Pruthvi-Sanghavi/Pid_group10_team2.svg?branch=master)](https://travis-ci.org/Pruthvi-Sanghavi/Pid_group10_team2)
[![Coverage Status](https://coveralls.io/repos/github/Pruthvi-Sanghavi/Pid_group10_team2/badge.svg?branch=master)](https://coveralls.io/github/Pruthvi-Sanghavi/Pid_group10_team2?branch=master)
---

## Overview

This project is all about designing a PID controller for a robot. The process of designing involved code verification and passing several tests. Coveralls and Travis have been used for code coverage.

## Notes

-Do we need to update the UML diagram? Nothing has really changed. 
-Do we all have enough comments here? We should all make sure we have the right doygen comments. 
-Should we exclude main and lib? 
-What else can we add to the running guide? 
-Do we need a separate Doxygen tag for class, in addition to file?

## Discussion notes

-Code works correctly 
-Agreed upon comments in all of our sections 
-Discussed testing for projects 
--Could possibly add corner cases 
--Could add test for error detection and null inputs 
--Passing illegal values into the class

## Standard install via command-line
```
cd <path to repository>
mkdir build
cd build
cmake ..
make

Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Authors and Roles
Part 1
Ryan Bates                 Navigator
Pruthvikumar Sanghavi      Driver

Part 2
Aruna Baijal			         Driver
Ethan Quist				         Navigator
