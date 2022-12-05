/**
 *****************************************************
 * @authors Nikhil Gupta (nikhil.gupta1607@gmail.com)
 * @date    2022-12-02 23:19:26
 * @version v1.0.0
 *****************************************************
 */

/*
 *
 * Power manager
 *
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include "power_manager.h"
using namespace std;

void PowerManager::set_power_level(int power_level)
{
    std::cout << "POWER_MANAGER::Power level is set to " << power_level << "\n";
    power_level_ = power_level;
    // we can add logic to conditionally call notify_all here
    notify_all();
}
int PowerManager::get_power_level()
{
    return power_level_;
}
void PowerManager::register_listerner(std::shared_ptr<IListener> listener)
{
    listener_list.push_back(listener);
}
void PowerManager::unregister_listerner(std::shared_ptr<IListener> listener)
{
    listener_list.remove(listener);
}
void PowerManager::notify_all()
{
    for (auto it : listener_list)
    {
        it->update(get_power_level());
    }
}
