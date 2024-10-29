//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <conio.h>
//#include <iostream>
//
//int is_leap_year(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//int days_in_months(int month, int year) {
//    int days = 0;
//    for (int m = 1; m < month; m++) {
//        if (m == 2) {
//            days += is_leap_year(year) ? 29 : 28;
//        }
//        else if (m == 4 || m == 6 || m == 9 || m == 11) {
//            days += 30;
//        }
//        else {
//            days += 31;
//        }
//    }
//    return days;
//}
//int day_difference(int day1, int month1, int year1, int day2, int month2, int year2) {
//
//    long days1 = year1 * 365 + day1;
//    long days2 = year2 * 365 + day2;
//
//
//    for (int year = 0; year < year1; year++) {
//        if (is_leap_year(year)) {
//            days1++;
//        }
//    }
//    for (int year = 0; year < year2; year++) {
//        if (is_leap_year(year)) {
//            days2++;
//        }
//    }
//
//    days1 += days_in_months(month1, year1);
//
//    days2 += days_in_months(month2, year2);
//
//
//    return (abs(days2 - days1));
//}
//
//int main() {
//
//    setlocale(LC_ALL, "RUS");
//    int a1 = 0, a2 = 0, a3 = 0; // время 1 - ого
//    int b1 = 0, b2 = 0, b3 = 0; // время 2 - ого
//    int c1 = 0, c2 = 0, c3 = 0; // время результата(9) сложения 
//    int fd1 = 0, fd2 = 0, fd3 = 0; // первая дата
//    int sd1 = 0, sd2 = 0, sd3 = 0; // вторая дата
//    int days = 0;
//    char ch, k = 0;
//    int dayss = 0; int fdays = 0; int sdays = 0; int dayz1 = 0; int dayz2 = 0;
//    int kod_goda; int denn; int kodm = 0;
//    int kodg1 = 0; int kodg2 = 0; int kodm1; int kodm2; int denn1; int denn2;
//    int dni = 0; // дни для прибавления
//    int result = 0;
//    int dni_res = 0, dres1 = 0, dres2 = 0, dres3 = 0; // для вычисления даты в 7 пункте
//    int dni1 = 31, dni2 = 28, dni2_2 = 29, dni3 = 31, dni4 = 30, dni5 = 31, dni6 = 30, dni7 = 31, dni8 = 31, dni9 = 30, dni10 = 31, dni11 = 30, dni12 = 31; // дни месяцов
//    int a_all = 0, b_all = 0, c_all = 0, res_all = 0; // для вычислений пункта 9
//    int flag = 1;
//    int vres1 = 0; int vres2 = 0; int vres3 = 0; int vresall = 0;
//    int A1 = 0; int y1 = 0; int m1 = 0;
//    int A2 = 0; int y2 = 0; int m2 = 0;
//    int jdn1 = 0; int jdn2 = 0; int jdn3 = 0;
//    char h;
//    int res1 = 0, res2 = 0, res3 = 0;
//    char pn[] = "Понедельник"; char vt[] = "Вторник"; char sr[] = "Среда"; char cht[] = "Четверг"; char pt[] = "Пятница"; char sb[] = "Суббота"; char vs[] = "Воскресенье";
//    while (true) {
//        system("cls");
//        if (flag == 1)
//            printf("1)Ввод 1 времени: %02d:%02d:%02d <-- \n", a1, a2, a3);
//        else
//            printf("1)Ввод 1 времени: %02d:%02d:%02d \n", a1, a2, a3);
//        if (flag == 2)
//            printf("2)Ввод 1 даты: %02d.%02d.%04d <-- \n", fd1, fd2, fd3);
//        else
//            printf("2)Ввод 1 даты: %02d.%02d.%04d \n", fd1, fd2, fd3);
//        if (flag == 3)
//            printf("3)Ввод 2 времени: %02d:%02d:%02d <-- \n", b1, b2, b3);
//        else
//            printf("3)Ввод 2 времени: %02d:%02d:%02d \n", b1, b2, b3);
//        if (flag == 4)
//            printf("4)Ввод 2 даты: %02d.%02d.%04d <-- \n", sd1, sd2, sd3);
//        else
//            printf("4)Ввод 2 даты: %02d.%02d.%04d \n", sd1, sd2, sd3);
//        if (flag == 5)
//            printf("5) Результат <-- \n");
//        else
//            printf("5) Результат \n");
//        if (flag == 6)
//            printf("6) Кол-во дней %d <-- \n", dni);
//        else
//            printf("6) Кол-во дней %d \n", dni);
//        if (flag == 7)
//            printf("7) Результат сложения/вычитания дней <-- \n");
//        else
//            printf("7) Результат сложения/вычитания дней \n");
//        if (flag == 8)
//            printf("8) Время для сложения: %02d:%02d:%02d <-- \n", c1, c2, c3);
//        else
//            printf("8) Время для сложения: %02d:%02d:%02d \n", c1, c2, c3);
//        if (flag == 9)
//            printf("9) Результат: <-- \n");
//        else
//            printf("9) Результат: \n");
//        h = _getch();
//        if ((h == 49) || (h == 13 && flag == 1)) {
//            system("cls");
//            printf("Ввод 1 времени (в формате 00:00:00): ");
//            while (true) {
//                char time_vv[9];
//                int count = 0;
//                while (count < 8) {
//                    char c = _getch();
//                    if (c >= '0' && c <= '9') {
//                        time_vv[count++] = c;
//                        printf("%c", c);
//                    }
//                    if (count == 2 || count == 5) {
//                        time_vv[count++] = ':';
//                        printf(":");
//                    }
//                }
//                time_vv[count] = '\0';
//                if (sscanf_s(time_vv, "%d:%d:%d", &a1, &a2, &a3) != 3 || 23 < a1 || a1 < 0 || 59 < a2 || a2 < 0 || a3 < 0 || a3 > 59) {
//                    a1 = 0, a2 = 0, a3 = 0;
//                    system("cls");
//                    printf("Некорректное значение! Введите заново: ");
//
//                }
//                else { break; }
//            }
//        }
//        if ((h == 50) || (h == 13 && flag == 2)) {
//            system("cls");
//            printf("Ввод 1 даты (в формате 00.00.0000): ");
//            while (true) {
//                char time_vv[11];
//                int count = 0;
//
//                while (count < 10) {
//                    char c = _getch();
//                    if (c >= '0' && c <= '9') {
//                        time_vv[count++] = c;
//                        printf("%c", c);
//                    }
//
//                    if (count == 2 || count == 5) {
//                        time_vv[count++] = '.';
//                        printf(".");
//                    }
//                }
//                time_vv[count] = '\0';
//                if (sscanf_s(time_vv, "%d.%d.%d", &fd1, &fd2, &fd3) != 3 || fd1 < 0 || fd1 > 31 || fd2 < 0 || fd2 > 12 || fd3 < 1930 || fd3 > 2030) {
//                    fd1 = 0, fd2 = 0, fd3 = 0;
//                    system("cls");
//                    printf("Некорректное значение! Введите заново: ");
//
//                }
//                else { break; }
//            }
//
//        }
//        if ((h == 51) || (h == 13 && flag == 3)) {
//            system("cls");
//            printf("Ввод 2 времени (в формате 00:00:00): ");
//            while (true) {
//                char time_vv[9];
//                int count = 0;
//
//                while (count < 8) {
//                    char c = _getch();
//                    if (c >= '0' && c <= '9') {
//                        time_vv[count++] = c;
//                        printf("%c", c);
//                    }
//
//                    if (count == 2 || count == 5) {
//                        time_vv[count++] = ':';
//                        printf(":");
//                    }
//                }
//                time_vv[count] = '\0';
//                if (sscanf_s(time_vv, "%d:%d:%d", &b1, &b2, &b3) != 3 || 23 < b1 || b1 < 0 || 59 < b2 || b2 < 0 || b3 < 0 || b3 > 59) {
//                    a1 = 0, a2 = 0, a3 = 0;
//                    system("cls");
//                    printf("Некорректное значение! Введите заново: ");
//
//                }
//                else { break; }
//            }
//        }
//        if ((h == 52) || (h == 13 && flag == 4)) {
//            system("cls");
//            printf("Ввод 2 даты (в формате 00.00.0000): ");
//            while (true) {
//                char time_vv[11];
//                int count = 0;
//
//                while (count < 10) {
//                    char c = _getch();
//                    if (c >= '0' && c <= '9') {
//                        time_vv[count++] = c;
//                        printf("%c", c);
//                    }
//
//                    if (count == 2 || count == 5) {
//                        time_vv[count++] = '.';
//                        printf(".");
//                    }
//                }
//                time_vv[count] = '\0';
//                if (sscanf_s(time_vv, "%d.%d.%d", &sd1, &sd2, &sd3) != 3 || sd1 < 0 || sd1 > 31 || sd2 < 0 || sd2 > 12 || sd3 < 1930 || sd3 > 2030) {
//                    sd1 = 0, sd2 = 0, sd3 = 0;
//                    system("cls");
//                    printf("Некорректное значение! Введите заново: ");
//
//                }
//                else { break; }
//            }
//        }
//        if ((h == 53) || (h == 13 && flag == 5)) {
//            if (fd1 != 0 && fd2 != 0 && fd3 != 0 && sd1 != 0 && sd2 != 0 && sd3 != 0) {
//                A1 = (14 - fd1) / 12;
//                y1 = (fd3 + 4800 - A1);
//                m1 = fd2 + 12 * A1 - 3;
//                jdn1 = fd1 + ((153 * m1 + 2) / 5) + 365 * y1 + (y1 / 4) - (y1 / 100) + (y1 / 400) - 32045;
//                A2 = (14 - sd1) / 12;
//                y2 = (sd3 + 4800 - A2);
//                m2 = sd2 + 12 * A2 - 3;
//                jdn2 = sd1 + ((153 * m2 + 2) / 5) + 365 * y2 + (y2 / 4) - (y2 / 100) + (y2 / 400) - 32045;
//
//                result = day_difference(fd1, fd2, fd3, sd1, sd2, sd3);
//                if ((jdn1 > jdn2 && a1 > b1)) {
//                    vres1 = abs(a1 - b1);
//                    vres2 = abs(a2 - b2);
//                    vres3 = abs(a3 - b3);
//                }
//                else {
//                    vresall = (60 - a3) + (60 - a2 - 1) * 60 + (24 - a1 - 1) * 3600 + b1 * 3600 + b2 * 60 + b3;
//                    vres1 = vresall / 3600;
//                    vres2 = (vresall - vres1 * 3600) / 60;
//                    vres3 = vresall - vres1 * 3600 - vres2 * 60;
//                    result--;
//                }
//                if (vres1 > 23) {
//                    result++;
//                    vres1 -= 24;
//                }
//                if (fd3 >= 2000) { kodg1 = (6 + fd3 % 100 + fd3 % 100 / 4) % 7; }
//                if (fd3 < 2000) { kodg1 = (0 + fd3 % 100 + fd3 % 100 / 4) % 7; }
//                if (fd2 == 1) { kodm1 = 1; }
//                if (fd2 == 2) { kodm1 = 4; }
//                if (fd2 == 3) { kodm1 = 4; }
//                if (fd2 == 4) { kodm1 = 0; }
//                if (fd2 == 5) { kodm1 = 2; }
//                if (fd2 == 6) { kodm1 = 5; }
//                if (fd2 == 7) { kodm1 = 0; }
//                if (fd2 == 8) { kodm1 = 3; }
//                if (fd2 == 9) { kodm1 = 6; }
//                if (fd2 == 10) { kodm1 = 1; }
//                if (fd2 == 11) { kodm1 = 4; }
//                if (fd2 == 12) { kodm1 = 6; }
//                if (fd3 % 4 == 0 && fd2 == 1) {
//                    if (fd3 % 100 == 0 && fd3 % 400 == 0) { kodm1 = 0; }
//                    else if (fd3 % 100 != 0) { kodm1 = 0; }
//                }
//                if (fd3 % 4 == 0 && fd2 == 2) {
//                    if (fd3 % 100 == 0 && fd3 % 400 == 0) { kodm1 = 3; }
//                    else if (fd3 % 100 != 0) { kodm1 = 3; }
//                }
//                denn1 = (fd1 + kodm1 + kodg1) % 7;
//                if (sd3 >= 2000) { kodg2 = (6 + sd3 % 100 + fd3 % 100 / 4) % 7; }
//                if (sd3 < 2000) { kodg2 = (0 + sd3 % 100 + sd3 % 100 / 4) % 7; }
//                if (sd2 == 1) { kodm2 = 1; }
//                if (sd2 == 2) { kodm2 = 4; }
//                if (sd2 == 3) { kodm2 = 4; }
//                if (sd2 == 4) { kodm2 = 0; }
//                if (sd2 == 5) { kodm2 = 2; }
//                if (sd2 == 6) { kodm2 = 5; }
//                if (sd2 == 7) { kodm2 = 0; }
//                if (sd2 == 8) { kodm2 = 3; }
//                if (sd2 == 9) { kodm2 = 6; }
//                if (sd2 == 10) { kodm2 = 1; }
//                if (sd2 == 11) { kodm2 = 4; }
//                if (sd2 == 12) { kodm2 = 6; }
//                if (sd3 % 4 == 0 && sd2 == 1) {
//                    if (sd3 % 100 == 0 && sd3 % 400 == 0) { kodm2 = 0; }
//                    else if (sd3 % 100 != 0) { kodm2 = 0; }
//                }
//                if (sd3 % 4 == 0 && sd2 == 2) {
//                    if (sd3 % 100 == 0 && sd3 % 400 == 0) { kodm2 = 3; }
//                    else if (sd3 % 100 != 0) { kodm2 = 3; }
//                }
//                denn2 = (sd1 + kodm2 + kodg2) % 7;
//                system("cls");
//                if (denn1 == 0) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, sb); };
//                if (denn1 == 1) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, vs); };
//                if (denn1 == 2) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, pn); };
//                if (denn1 == 3) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, vt); };
//                if (denn1 == 4) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, sr); };
//                if (denn1 == 5) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, cht); };
//                if (denn1 == 6) { printf("1 дата: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, pt); };
//                if (denn2 == 0) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, sb); };
//                if (denn2 == 1) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, vs); };
//                if (denn2 == 2) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, pn); };
//                if (denn2 == 3) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, vt); };
//                if (denn2 == 4) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, sr); };
//                if (denn2 == 5) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, cht); };
//                if (denn2 == 6) { printf("2 дата: %02d.%02d.%04d, %s\n", sd1, sd2, sd3, pt); };
//                printf("Кол-во дней: %d, Разница времени: %02d:%02d:%02d", result, vres1, vres2, vres3);
//                _getch();
//            }
//            else {
//                system("cls");
//                printf("Введены не все значения");
//                _getch();
//            }
//        }
//        if ((h == 54) || (h == 13 && flag == 6)) {
//            system("cls");
//            printf("Введите кол-во дней:");
//            if (scanf_s("%d", &dni) != 1 || dni > 10000 || dni < -10000) {
//                dni = 0;
//                system("cls");
//                printf("Некорректное значение!");
//                scanf_s("%*[^\n]");
//                scanf_s("%*c");
//                _getch();
//            }
//        }
//        if ((h == 55) || (h == 13 && flag == 7)) {
//            system("cls");
//            if (fd3 == 0 || fd2 == 0 || fd1 == 0) {
//                system("cls");
//                printf("Введены не все значения!");
//                _getch();
//                continue;
//            }
//            if (dni >= 0) {
//                dres2 = fd2, dres3 = fd3;
//                dni_res = fd1 + dni;
//                while (dni_res > days) {
//                    if (dres2 == 1) { days = dni1; }
//                    if (dres2 == 2) { days = dni2; }
//                    if (dres2 == 3) { days = dni3; }
//                    if (dres2 == 4) { days = dni4; }
//                    if (dres2 == 5) { days = dni5; }
//                    if (dres2 == 6) { days = dni6; }
//                    if (dres2 == 7) { days = dni7; }
//                    if (dres2 == 8) { days = dni8; }
//                    if (dres2 == 9) { days = dni9; }
//                    if (dres2 == 10) { days = dni10; }
//                    if (dres2 == 11) { days = dni11; }
//                    if (dres2 == 12) { days = dni12; }
//                    if (dres3 % 4 == 0 && dres2 == 2) {
//                        if (dres3 % 100 == 0 && dres3 % 400 == 0) { days = dni2_2; }
//                        else if (dres3 % 100 != 0) { days = dni2_2; }
//                    }
//                    if (dres2 > 12) { dres3++; dres2 = 1; }
//                    dres2 += 1;
//                    dni_res -= days;
//                }
//                if (dres2 > 12) { dres3++; dres2 = 1; }
//            }
//            else if (dni < 0) {
//                dres2 = fd2, dres3 = fd3;
//                dni_res = -fd1 + abs(dni);
//                dres2--;
//                while (dni_res > days) {
//                    if (dres2 == 1) { days = dni1; }
//                    if (dres2 == 2) { days = dni2; }
//                    if (dres2 == 3) { days = dni3; }
//                    if (dres2 == 4) { days = dni4; }
//                    if (dres2 == 5) { days = dni5; }
//                    if (dres2 == 6) { days = dni6; }
//                    if (dres2 == 7) { days = dni7; }
//                    if (dres2 == 8) { days = dni8; }
//                    if (dres2 == 9) { days = dni9; }
//                    if (dres2 == 10) { days = dni10; }
//                    if (dres2 == 11) { days = dni11; }
//                    if (dres2 == 12) { days = dni12; }
//                    if (dres3 % 4 == 0 && dres2 == 2) {
//                        if (dres3 % 100 == 0 && dres3 % 400 == 0) { days = dni2_2; }
//                        if (dres3 % 100 != 0) { days = dni2_2; }
//                    }
//                    /*if (dres2 == 2 && dres3 % 4 == 0 && dres3 % 100 == 0 && dres3 % 400 == 0) { days = dni2_2; }*/
//                    dres2 -= 1;
//                    if (dres2 < 1) { dres3--; dres2 = 12; }
//                    dni_res -= days;
//                }
//                if (dres2 == 1) { days = dni1; }
//                if (dres2 == 2) { days = dni2; }
//                if (dres2 == 3) { days = dni3; }
//                if (dres2 == 4) { days = dni4; }
//                if (dres2 == 5) { days = dni5; }
//                if (dres2 == 6) { days = dni6; }
//                if (dres2 == 7) { days = dni7; }
//                if (dres2 == 8) { days = dni8; }
//                if (dres2 == 9) { days = dni9; }
//                if (dres2 == 10) { days = dni10; }
//                if (dres2 == 11) { days = dni11; }
//                if (dres2 == 12) { days = dni12; }
//                if (dres3 % 4 == 0 && dres2 == 2) {
//                    if (dres3 % 100 == 0 && dres3 % 400 == 0) { days = dni2_2; }
//                    if (dres3 % 100 != 0) { days = dni2_2; }
//                }
//                /*if (dres2 == 2 && dres3 % 4 == 0 && dres3 % 100 == 0 && dres3 % 400 == 0) { days = dni2_2; }*/
//                if (dres2 < 1) { dres3--; dres2 = 12; }
//                dni_res = days - dni_res;
//            }
//            dres1 = dni_res;
//            if (dres3 >= 2000) { kod_goda = (6 + dres3 % 100 + dres3 % 100 / 4) % 7; }
//            if (dres3 < 2000) { kod_goda = (0 + dres3 % 100 + dres3 % 100 / 4) % 7; }
//            if (dres2 == 1) { kodm = 1; }
//            if (dres2 == 2) { kodm = 4; }
//            if (dres2 == 3) { kodm = 4; }
//            if (dres2 == 4) { kodm = 0; }
//            if (dres2 == 5) { kodm = 2; }
//            if (dres2 == 6) { kodm = 5; }
//            if (dres2 == 7) { kodm = 0; }
//            if (dres2 == 8) { kodm = 3; }
//            if (dres2 == 9) { kodm = 6; }
//            if (dres2 == 10) { kodm = 1; }
//            if (dres2 == 11) { kodm = 4; }
//            if (dres2 == 12) { kodm = 6; }
//            if (dres3 % 4 == 0 && dres2 == 1) {
//                if (dres3 % 100 == 0 && dres3 % 400 == 0) { kodm = 0; }
//                else if (dres3 % 100 != 0) { kodm = 0; }
//            }
//            if (dres3 % 4 == 0 && dres2 == 2) {
//                if (dres3 % 100 == 0 && dres3 % 400 == 0) { kodm = 3; }
//                else if (dres3 % 100 != 0) { kodm = 3; }
//            }
//            if (fd3 >= 2000) { kodg1 = (6 + fd3 % 100 + fd3 % 100 / 4) % 7; }
//            if (fd3 < 2000) { kodg1 = (0 + fd3 % 100 + fd3 % 100 / 4) % 7; }
//            if (fd2 == 1) { kodm1 = 1; }
//            if (fd2 == 2) { kodm1 = 4; }
//            if (fd2 == 3) { kodm1 = 4; }
//            if (fd2 == 4) { kodm1 = 0; }
//            if (fd2 == 5) { kodm1 = 2; }
//            if (fd2 == 6) { kodm1 = 5; }
//            if (fd2 == 7) { kodm1 = 0; }
//            if (fd2 == 8) { kodm1 = 3; }
//            if (fd2 == 9) { kodm1 = 6; }
//            if (fd2 == 10) { kodm1 = 1; }
//            if (fd2 == 11) { kodm1 = 4; }
//            if (fd2 == 12) { kodm1 = 6; }
//            if (fd3 % 4 == 0 && fd2 == 1) {
//                if (fd3 % 100 == 0 && fd3 % 400 == 0) { kodm1 = 0; }
//                else if (fd3 % 100 != 0) { kodm1 = 0; }
//            }
//            if (fd3 % 4 == 0 && fd2 == 2) {
//                if (fd3 % 100 == 0 && fd3 % 400 == 0) { kodm1 = 3; }
//                else if (fd3 % 100 != 0) { kodm1 = 3; }
//            }
//            denn1 = (fd1 + kodm1 + kodg1) % 7;
//            if (denn1 == 0) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, sb); }
//            if (denn1 == 1) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, vs); }
//            if (denn1 == 2) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, pn); }
//            if (denn1 == 3) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, vt); }
//            if (denn1 == 4) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, sr); }
//            if (denn1 == 5) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, cht); }
//            if (denn1 == 6) { printf("Начальный день: %02d.%02d.%04d, %s\n", fd1, fd2, fd3, pt); }
//            denn = (dres1 + kodm + kod_goda) % 7;
//            if (denn == 0) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, sb); };
//            if (denn == 1) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, vs); };
//            if (denn == 2) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, pn); };
//            if (denn == 3) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, vt); };
//            if (denn == 4) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, sr); };
//            if (denn == 5) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, cht); };
//            if (denn == 6) { printf("Результат сложения/вычитания дней: %02d.%02d.%04d, %s", dres1, dres2, dres3, pt); };
//            _getch();
//        }
//        if ((h == 56) || (h == 13 && flag == 8)) {
//            system("cls");
//            printf("Время для сложения (в формате 00:00:00): ");
//            while (true) {
//                char time_vv[9];
//                int count = 0;
//                while (count < 8) {
//                    char c = _getch();
//                    if (c >= '0' && c <= '9') {
//                        time_vv[count++] = c;
//                        printf("%c", c);
//                    }
//                    if (count == 2 || count == 5) {
//                        time_vv[count++] = ':';
//                        printf(":");
//                    }
//                }
//                time_vv[count] = '\0';
//                if (sscanf_s(time_vv, "%d:%d:%d", &c1, &c2, &c3) != 3 || 23 < c1 || c1 < 0 || 59 < c2 || c2 < 0 || c3 < 0 || c3 > 59) {
//                    c1 = 0, c2 = 0, c3 = 0;
//                    system("cls");
//                    printf("Некорректное значение! Введите заново: ");
//                }
//                else { break; }
//            }
//        }
//        if ((h == 57) || (h == 13 && flag == 9)) {
//            system("cls");
//            c_all = c1 * 3600 + c2 * 60 + c3;
//            a_all = a1 * 3600 + a2 * 60 + a3;
//            res_all = c_all + a_all;
//            res1 = res_all / 3600;
//            if (res1 > 23) { res1 = res1 - 24; }
//            if (res2 > 60) { res1++; res2 = res2 - 60; }
//            if (res3 > 60) { res2++; res3 = res3 - 60; }
//            res2 = (res_all % 3600) / 60;
//            res3 = (res_all % 3600) % 60;
//            printf("Результат: %02d:%02d:%02d", res1, res2, res3);
//            _getch();
//        }
//        if (flag == 1 && h == 72) {
//            continue;
//        }
//        if (flag == 9 && h == 80) {
//            continue;
//        }
//        if (h == 80) {
//            flag++;
//        }
//        if (h == 72) {
//            flag--;
//        }
//        if (h == 27) {
//            exit(0);
//        }
//    }
//}
//
