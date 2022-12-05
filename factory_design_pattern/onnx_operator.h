#pragma once
/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 21:24:02
 * @version v1.0.0
 *****************************************************
 */

/*
*
* ONNXOperator
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include "operator.h"

using namespace std;

class ONNXOperator: public Operator{
    public:
    bool prepare_op(){
        std::cout<<"Preparing onnx_op \n";
        return true;
    }
    bool execute_op(){
        std::cout<<"Executing onnx_op \n";
         return true;
    }
};
