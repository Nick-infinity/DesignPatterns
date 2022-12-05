#pragma once
/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 21:23:55
 * @version v1.0.0
 *****************************************************
 */

/*
*
* ArmOperator
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include "operator.h"

using namespace std;


class ARMOperator: public Operator{
    public:
    bool prepare_op(){
        std::cout<<"Preparing arm_op \n";
         return true;
    }
    bool execute_op(){
        std::cout<<"Executing arm_op \n";
         return true;
    }
};