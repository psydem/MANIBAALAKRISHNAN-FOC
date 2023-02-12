#!/bin/bash

echo "Enter marks for student 1: "
read mark1
if [ $mark1 -ge 90 ]
then
    grade1="A+"
elif [ $mark1 -ge 80 ]
then
    grade1="A"
elif [ $mark1 -ge 70 ]
then
    grade1="B"
elif [ $mark1 -ge 60 ]
then
    grade1="C"
else
    grade1="F"
fi

echo "Enter marks for student 2: "
read mark2
if [ $mark2 -ge 90 ]
then
    grade2="A+"
elif [ $mark2 -ge 80 ]
then
    grade2="A"
elif [ $mark2 -ge 70 ]
then
    grade2="B"
elif [ $mark2 -ge 60 ]
then
    grade2="C"
else
    grade2="F"
fi

echo "Enter marks for student 3: "
read mark3
if [ $mark3 -ge 90 ]
then
    grade3="A+"
elif [ $mark3 -ge 80 ]
then
    grade3="A"
elif [ $mark3 -ge 70 ]
then
    grade3="B"
elif [ $mark3 -ge 60 ]
then
    grade3="C"
else
    grade3="F"
fi

echo "Enter marks for student 4: "
read mark4
if [ $mark4 -ge 90 ]
then
    grade4="A+"
elif [ $mark4 -ge 80 ]
then
    grade4="A"
elif [ $mark4 -ge 70 ]
then
    grade4="B"
elif [ $mark4 -ge 60 ]
then
    grade4="C"
else
    grade4="F"
fi

echo "Enter marks for student 5: "
read mark5
if [ $mark5 -ge 90 ]
then
    grade5="A+"
elif [ $mark5 -ge 80 ]
then
    grade5="A"
elif [ $mark5 -ge 70 ]
then
    grade5="B"
elif [ $mark5 -ge 60 ]
then
    grade5="C"
else
    grade5="F"
fi

echo "Marks and grades for 5 students are: "
echo "Student 1: $mark1, $grade1"
echo "Student 2: $mark2, $grade2"
echo "Student 3: $mark3, $grade3"
echo "Student 4: $mark4, $grade4"
echo "Student 5: $mark5, $grade5"