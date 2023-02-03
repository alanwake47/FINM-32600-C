//
// Created by Aman Krishna on 03/02/23.
//

#include "gradeconversion.h"

char converter(int score)
{
    char grade;
    if (score <= 100 && score >= 95)
    {
        grade = 'A';
    }
    else if (score <= 94 && score >=90)
    {
        grade = 'B';
    }
    else
    {
        grade = 'C';
    }
    return grade;
}
