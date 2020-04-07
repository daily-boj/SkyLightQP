#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int convert_month(string m) {
    if(m == "January") {
        return 1;
    }
    if(m == "February") {
        return 2;
    }
    if(m == "March") {
        return 3;
    }
    if(m == "April") {
        return 4;
    }
    if(m == "May") {
        return 5;
    }
    if(m == "June") {
        return 6;
    }
    if(m == "July") {
        return 7;
    }
    if(m == "August") {
        return 8;
    }
    if(m == "September") {
        return 9;
    }
    if(m == "October") {
        return 10;
    }
    if(m == "November") {
        return 11;
    }
    if(m == "December") {
        return 12;
    }
    return 0;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

    string str_month;
    int month, day, year, hour, min;

    cin >> str_month;
    scanf("%d, %d %d:%d", &day, &year, &hour, &min);

    month = convert_month(str_month);

    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) months[1] = 29;
    // 윤년 계산

    int total_year = 0, total_sec = 0;
    for(int i = 0; i < 12; i++) total_year += months[i];
    total_sec = total_year * 24 * 3600;
    // year to second

    int m = 0;
    for(int i = 0; i < month - 1; i++) {
        m += months[i];
    }
    m += day - 1;
    m *= 86400;
    // month + day to second

    hour *= 3600;
    min *= 60;
    // hour, min to second

    printf("%.9lf", ((double)(m + hour + min) / (double)total_sec) * 100);

    return 0;
}