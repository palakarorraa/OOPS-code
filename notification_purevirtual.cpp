#include<iostream>
using namespace std;
class Notification
{
public:
    virtual void showMessage(){
        cout << "You have a new notification." << endl;
    }
};

class LikeNotification : public Notification {
public:
    void showMessage() override {
        cout << "Someone liked your post ❤️" << endl;
    }
};

class CommentNotification : public Notification {
public:
    void showMessage() override {
        cout << "Someone commented on your post 💬" << endl;
    }
};

class FollowNotification : public Notification {
public:
    void showMessage() override {
        cout << "Someone started following you 👤" << endl;
    }
};

int main() {
    LikeNotification like;
    CommentNotification comment;
    FollowNotification follow;
   
    Notification* notifications[3];

    notifications[0] = &like;
    notifications[1] = &comment;
    notifications[2] = &follow;

    cout << "Displaying all notifications:\n" << endl;
    for (int i = 0; i < 3; i++) {
        notifications[i]->showMessage();
    }

    return 0;
}
