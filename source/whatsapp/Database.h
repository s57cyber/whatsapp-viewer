#pragma once

#include <vector>
#include <SQLiteCpp/SQLiteCpp.h>

#include "Chat.h"
#include "Message.h"

namespace WhatsApp
{

class Database
{
private:
    SQLite::Database database;

public:
    Database(const std::string &filename);

    std::vector<Chat> loadChats();
    std::vector<Message> loadMessages(const Chat &chat);
};

}
