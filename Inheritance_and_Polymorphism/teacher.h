#ifndef TEACHER_H
#define TEACHER_H

#include<vector>
#include<string>
#include "user.h"

class Teacher: public Coordinate {
  public :
    std::vector<std::string> class_teaching;
    void output();
};

#endif
