/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 21:08:42
 * @version v1.0.0
 *****************************************************
 */

/*
*
* Operator Factory
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>

#include "operator.h"
#include "tflite_operator.h"
#include "arm_operator.h"
#include "onnx_operator.h"

using namespace std;

enum class op_type{
    TFLITE=0,
    ARM=1,
    ONNX=2,
};

class OperatorFactory{
    public:
    static Operator* create_op(op_type op){
        Operator* generic_operator = NULL;
        switch(op){
            case op_type::TFLITE:
                generic_operator = new TfliteOperator();
                break;
            case op_type::ARM:
                generic_operator = new ARMOperator();
                break;
            case op_type::ONNX:
                generic_operator = new ONNXOperator();
                break;
            default:
                generic_operator = NULL;
                break;
        }
        
        generic_operator->prepare_op();
        generic_operator->execute_op();
        return generic_operator;

    }

};