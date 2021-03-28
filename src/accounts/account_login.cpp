#include "account_login.hpp"

void AccountLogin::connect_to_db()
{
    int rc = sqlite3_open_v2(AccLogin::acc_path, &connection, SQLITE_OPEN_READONLY, NULL);
    if(rc)
        std::cout <<"Unable to connect to database" <<std::endl;
    else
    {
        connection_status = true;
        std::cout <<"Connection established" <<std::endl;
    }
}

void AccountLogin::disconnect_to_db()
{
    int rc = sqlite3_close_v2(connection);
    if(rc)
        std::cout <<"Unable to close database" <<std::endl;
    else
    {
        connection_status = false;
        std::cout <<"Connection closed" <<std::endl;
    }
}

AccountLogin::~AccountLogin()
{
    if(connection_status)
        disconnect_to_db();
}

bool AccountLogin::is_logged_in()
{
    return logged_in;
}

bool AccountLogin::log_in()
{
    
}