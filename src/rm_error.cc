//
// File:        rm_error.cc
// Description: RM_PrintError implementation
// Authors:     Aditya Bhandari (adityasb@stanford.edu)
//

#include<iostream>
#include "rm.h"
using namespace std;

// Print a verbose error
void RM_PrintError(RC rc) {
    // 根据错误/警告编号(见rm.h),打印提示信息
    printf("error at layer RM,err code:(START_RM_ERR-%d)",rc);
}