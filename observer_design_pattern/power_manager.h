#pragma once
/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 23:19:49
 * @version v1.0.0
 *****************************************************
 */

/*
 *
 * Powermanager h
 *
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <memory>
#include "iListener.h"

using namespace std;

class PowerManager
{
private:
    std::list<std::shared_ptr<IListener>> listener_list;
    int power_level_;

public:
    void set_power_level(int power_level);
    int get_power_level();
    void register_listerner(std::shared_ptr<IListener> listener);
    void unregister_listerner(std::shared_ptr<IListener> listener);
    void notify_all();
};