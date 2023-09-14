#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
/**
*print_remaining_days - takes a date and prints how many days are
*left in the year, taking leap years into account
*@month: month in number format
*@day: day of month
*@year: year
*Return: void
*/
void print_remaining_days(int month, int day, int year)
{
//Check if the year is a leap year
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
//If it's a leap year and the date is beyond February 29th
if (month >= 2 && day >= 60)
{
day++; //Adjust day for leap year
}

//Print the day of the year and remaining days
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
//If it's not a leap year or date is not beyond February 29th
if (month == 2 && day == 60)
{
//Invalid date for non-leap years
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
//Print the day of the year and remaining days for non-leap years
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}//Check if the year is a leap year
