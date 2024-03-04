
#include <iostream>
using namespace std;
class Cricket
{
private:
    int runs;
    int out;
    int balls;

public:
    Cricket(int r, int b, int o) : runs(r), balls(b), out(o) {}
    int getruns() const
    {
        return runs;
    }
    int getballs() const
    {
        return balls;
    }
    int getout() const
    {
        return out;
    }
    void setruns(int r)
    {
        runs = r;
    }
    void setballs(int b)
    {
        balls = b;
    }
    void setout(int o)
    {
        out = o;
    }
    inline double battingAverage() const
    {
        return (double)runs / out;
    }
    inline double strikeRate() const
    {
        return (double)runs / balls * 100;
    }
    void playerDetails() const
    {
        cout << "\nPlayer Details:\n";
        cout << "Runs: " << runs << endl;
        cout << "Balls: " << balls << endl;
        cout << "Out: " << out << endl;
    }
};
void dev(){
    cout << "-----------------Developed by Muhammad Saim-----------------" << endl;
    cout << "-----------------ID: 23K-0708-------------------------------" << endl;

}
int main(){
    dev();
    Cricket player(100, 200, 10);
    player.playerDetails();
    cout << "Batting Average is : " << player.battingAverage() << endl;
    cout << "Strike Rate is: " << player.strikeRate() << endl;
    return 0;
}