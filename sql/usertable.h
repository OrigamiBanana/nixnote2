#ifndef USERTABLE_H
#define USERTABLE_H
#include <Q_LONG>
#include <evernote/UserStore.h>
#include <evernote/NoteStore.h>

using namespace evernote::edam;

class UserTable
{
private:
    void createTable();

public:
    UserTable();
    void updateUser(User &user);
    void updateSyncState(SyncState s);
    qlonglong getLastSyncDate();
    qint32 getLastSyncNumber();
    void updateLastSyncDate(long date);
    void updateLastSyncNumber(qint32 usn);
    void getUser(User &user);
    qlonglong getUploadAmt();
};

#endif // USER_H
