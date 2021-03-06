/*
 * Created by Jesse Stowe
 * Student ID: 905*******
 * email: sjesse@vt.edu
 * class: ECE 3574
 * Assignment: Homework 1
 * File: header file for birthday
 */

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <QtCore/QDate>
#include <QtCore/QString>

class Birthday
{
public:
    Birthday();
    Birthday(QString newName, QDate newDate);
    QString getName() const;
    QDate getDate() const;
    void setName(QString newName);
    void setDate(QDate newDate);
    QString& print();
    bool operator==(const Birthday& b) const;
private:
    QString m_name;
    QDate m_date;
};

#endif // BIRTHDAY_H
