/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 21:49:19
 * @version v1.0.0
 *****************************************************
 */

/*
*
* Factory Design Pattern main file
*
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include "operator_factory.cpp"

using namespace std;

int main() {

    OperatorFactory::create_op(op_type::TFLITE);

    return 1;
}
