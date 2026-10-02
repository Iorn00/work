#ifndef TIME_H
#define TIME_H
class Time{
    public:
        int hours;
        int minutes;
        int second;

    public:
        Time();
        Time(int h, int m, int s);

        void setHours(int h);
        void setMinute(int m);
        void setSecond(int s);

        int getHours();
        int getMinutes();
        int getSecond();

        void showTime();
};
#endif