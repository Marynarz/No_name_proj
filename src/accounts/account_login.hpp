#ifndef ACC_LOG_IN_HPP_
#define ACC_LOG_IN_HPP_
#include <sqlite3.h>
#include <string>
#include <iostream>

namespace AccLogin
{
    const char * acc_path {"accounts/accounts.db"};
};

class AccountLogin
{
    std::string login_name;
    std::string password;
    bool logged_in;
    
    //db handilng
    bool connection_status;
    sqlite3 *connection;

    void connect_to_db();
    void disconnect_to_db();

    public:
    AccountLogin(std::string lgnName = "", std::string passwd = "") : login_name{lgnName}, password{passwd}, connection_status{false}, logged_in{false} {};
    ~AccountLogin();

    bool is_logged_in();
    bool log_in();
    bool log_out();

};

#endif