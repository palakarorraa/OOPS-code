#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class Player{
    string name;
    int runs;
public:
    void create(string playerName){
        name = playerName;
        runs = 0;
    }
    int bat(){
        int score = rand() % 7;
        runs += score;
        if (score == 4 || score == 6){
            celebrate(score);
        }
        return score;
    }
    void celebrate(int score){
        cout<<name<<" celebrates!🎉 (hit "<< score<< ")" <<endl;
    }
    string getName(){
        return name;
    }
    int getRuns(){
        return runs;
    }
};
class Team {
    string name;
    Player players[3];
    int totalRuns;
public:
    void create(string teamName, string playerNames[], int n){
        name = teamName;
        totalRuns = 0;
        for(int i = 0;i < n; i++){
            players[i].create(playerNames[i]);
        }
    }
    int playInnings(){
        cout<<"\n🏏"<< name << "is batting..."<<endl;
        for(int i=0;i<3;i++){
            cout<<"\n"<< players[i].getName() <<" is batting:"<<endl;
            for(int ball =1; ball<=3; ball++){
                int score = players[i].bat();
                cout<<"Ball "<< ball <<": "<< score<<" runs "<<endl;
                totalRuns += score;
                Sleep(800);
            }
            cout<< players[i].getName()<<" scored total: "
                << players[i].getRuns()<<endl;
        }
        auto showScore = [&](){
            cout<<"\n📊"<< name <<"scored a total of"
                << totalRuns <<"runs.\n"<<endl;
        };
        showScore();
        return totalRuns;
    }
    int getTotalRuns(){
        return totalRuns;
    }
    string getName(){
        return name;
    }
};
int main(){
    SetConsoleOutputCP(65001);
    srand(time(0));
    Team teams[2];
    string teamName,playerNames[3];
    for(int i = 0; i < 2; i++){
        cout<<"Enter Team"<< i + 1<<" name: ";
        cin>>teamName;
        cout<<"Enter 3 player names for "<< teamName <<": "<<endl;
        for(int j=0; j<3; j++){
            cin>>playerNames[j];
        }
        teams[i].create(teamName, playerNames, 3);
    }
    int score1 = teams[0].playInnings();
    int score2 = teams[1].playInnings();
    cout<<" Final Result 🏆:"<<endl;
    if(score1 > score2){
        cout<<"Winner: "<< teams[0].getName()
            <<"with"<< score1 <<"runs!"<<endl;
    } else if (score2 > score1){
        cout<<"Winner: "<< teams[1].getName()
            <<"with "<<score2 <<"runs!"<<endl;
    } else {
        cout<<"It's a Tie! Both teams scored "<< score1 <<"runs."<<endl;
    }
    return 0;
}