#include <iostream>
using namespace std;

int Random(int min, int max) {
    return min + rand() % (max - min);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int c;
    cout << "в этой игре вы можете ставить больше очков чем у вас есть, но это рискованно(это не баг, это фича) +увеличение вероятности бота написано не через массивы, а через if/else if/else" << endl;
    cout << "выберите уровень сложности: normal(0), hard(1), crazy(2), unreal(3) ";
    cin >> c;
    float bankcheloveka = 100, bankbota = 100, koaf = 0.9, zachisleno;
    int stavka, chislocheloveka, raznicacheloveka, raznicabota, a = 1, b = 1;

    if (c == 0) {

        while (bankbota > 0 and bankcheloveka > 0) {

            int chislobota = rand() % 101, zagadannoechislo = rand() % 101;

            cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
            cout << "введите ставку: ";
            cin >> stavka;//ставка 
            cout << "введите число от 0 до 100:";//число человека 
            cin >> chislocheloveka;
            cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

            if (chislocheloveka > zagadannoechislo) { //разница человека 
                raznicacheloveka = chislocheloveka - zagadannoechislo;
            }

            else if (chislocheloveka < zagadannoechislo) {
                raznicacheloveka = zagadannoechislo - chislocheloveka;
            }

            else {
                a = 0;
            }

            if (chislobota > zagadannoechislo) {//разница бота 
                raznicabota = chislobota - zagadannoechislo;
            }

            else if (chislobota < zagadannoechislo) {
                raznicabota = zagadannoechislo - chislobota;
            }

            else {
                b = 0;
            }


            if (a == 0 and b == 0) {//если оба угадали 
                cout << "ничья!";
            }

            else if (a == 0 and b != 0) { //если человек угадал 
                cout << "вы победили!" << endl;
                zachisleno = stavka * koaf;
                cout << zachisleno;
                bankcheloveka += zachisleno; //добавление в бч 
                bankbota = bankbota - stavka; //отнимаем у бб 
            }

            else if (a != 0 and b == 0) { //если бот угадал 
                cout << "вы проиграли!" << endl;
                zachisleno = stavka * koaf;
                bankbota += zachisleno; //добавляем в бб 
                bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
            }

            else if (raznicacheloveka < raznicabota) { //если человек ближе 
                cout << "вы победили!" << endl;
                zachisleno = stavka * koaf;
                bankcheloveka += zachisleno; //добавление в бч 
                bankbota = bankbota - stavka; //отнимаем у бб 
            }

            else if (raznicacheloveka > raznicabota) { //если бот ближе 
                cout << "вы проиграли!" << endl;
                zachisleno = stavka * koaf;
                bankbota += zachisleno; //добавляем в бб 
                bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
            }

            else if (raznicacheloveka == raznicabota) {
                cout << "ничья!" << endl;
            }

        }
        if (bankbota <= 0) {
            cout << "у бота закончились очки!" << endl;
        }
        else if (bankcheloveka <= 0) {
            cout << "у вас закончились очки!" << endl;
        }
        else {
            cout << ":)";
        }
    }
    else if (c == 1) {

        while (bankbota > 0 and bankcheloveka > 0) {

            int zagadannoechislo = rand() % 101;

            if (zagadannoechislo > 0 and zagadannoechislo <= 50) {
                int chislobota = Random(0, 50);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            else if (zagadannoechislo > 50 and zagadannoechislo <= 100) {

                int chislobota = Random(50, 100);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            if (bankbota <= 0) {
                cout << "у бота закончились очки!!" << endl;
            }
            else if (bankcheloveka <= 0) {
                cout << "у вас закончились очки!" << endl;
            }
            else {
                cout << ":) ";
            }

        }
    }
    else if (c == 2) {

        while (bankbota > 0 and bankcheloveka > 0) {

            int zagadannoechislo = rand() % 101;

            if (zagadannoechislo > 0 and zagadannoechislo <= 25) {
                int chislobota = Random(0, 25);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            else if (zagadannoechislo > 25 and zagadannoechislo <= 50) {

                int chislobota = Random(25, 50);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            else if (zagadannoechislo > 50 and zagadannoechislo <= 75) {

                int chislobota = Random(50, 75);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            else if (zagadannoechislo > 75 and zagadannoechislo <= 100) {

                int chislobota = Random(75, 100);

                cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
                cout << "введите ставку: ";
                cin >> stavka;//ставка 
                cout << "введите число от 0 до 100:";//число человека 
                cin >> chislocheloveka;
                cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

                if (chislocheloveka > zagadannoechislo) { //разница человека 
                    raznicacheloveka = chislocheloveka - zagadannoechislo;
                }

                else if (chislocheloveka < zagadannoechislo) {
                    raznicacheloveka = zagadannoechislo - chislocheloveka;
                }

                else {
                    a = 0;
                }

                if (chislobota > zagadannoechislo) {//разница бота 
                    raznicabota = chislobota - zagadannoechislo;
                }

                else if (chislobota < zagadannoechislo) {
                    raznicabota = zagadannoechislo - chislobota;
                }

                else {
                    b = 0;
                }


                if (a == 0 and b == 0) {//если оба угадали 
                    cout << "ничья!";
                }

                else if (a == 0 and b != 0) { //если человек угадал 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (a != 0 and b == 0) { //если бот угадал 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka < raznicabota) { //если человек ближе 
                    cout << "вы победили!" << endl;
                    zachisleno = stavka * koaf;
                    bankcheloveka += zachisleno; //добавление в бч 
                    bankbota = bankbota - stavka; //отнимаем у бб 
                }

                else if (raznicacheloveka > raznicabota) { //если бот ближе 
                    cout << "вы проиграли!" << endl;
                    zachisleno = stavka * koaf;
                    bankbota += zachisleno; //добавляем в бб 
                    bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
                }

                else if (raznicacheloveka == raznicabota) {
                    cout << "ничья!" << endl;
                }
            }
            if (bankbota <= 0) {
                cout << "у бота закончились очки!!" << endl;
            }
            else if (bankcheloveka <= 0) {
                cout << "у вас закончились очки!" << endl;
            }
            else {
                cout << ":) ";
            }
        }



    }
    else if (c == 3) {
        while (bankbota > 0 and bankcheloveka > 0) {

            int zagadannoechislo = rand() % 101;
            int chislobota = zagadannoechislo;

            cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
            cout << "введите ставку: ";
            cin >> stavka;//ставка 
            cout << "введите число от 0 до 100:";//число человека 
            cin >> chislocheloveka;
            cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

            if (chislocheloveka > zagadannoechislo) { //разница человека 
                raznicacheloveka = chislocheloveka - zagadannoechislo;
            }

            else if (chislocheloveka < zagadannoechislo) {
                raznicacheloveka = zagadannoechislo - chislocheloveka;
            }

            else {
                a = 0;
            }

            if (chislobota > zagadannoechislo) {//разница бота 
                raznicabota = chislobota - zagadannoechislo;
            }

            else if (chislobota < zagadannoechislo) {
                raznicabota = zagadannoechislo - chislobota;
            }

            else {
                b = 0;
            }


            if (a == 0 and b == 0) {//если оба угадали 
                cout << "ничья!";
            }

            else if (a == 0 and b != 0) { //если человек угадал 
                cout << "вы победили!" << endl;
                zachisleno = stavka * koaf;
                cout << zachisleno;
                bankcheloveka += zachisleno; //добавление в бч 
                bankbota = bankbota - stavka; //отнимаем у бб 
            }

            else if (a != 0 and b == 0) { //если бот угадал 
                cout << "вы проиграли!" << endl;
                zachisleno = stavka * koaf;
                bankbota += zachisleno; //добавляем в бб 
                bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
            }

            else if (raznicacheloveka < raznicabota) { //если человек ближе 
                cout << "вы победили!" << endl;
                zachisleno = stavka * koaf;
                bankcheloveka += zachisleno; //добавление в бч 
                bankbota = bankbota - stavka; //отнимаем у бб 
            }

            else if (raznicacheloveka > raznicabota) { //если бот ближе 
                cout << "вы проиграли!" << endl;
                zachisleno = stavka * koaf;
                bankbota += zachisleno; //добавляем в бб 
                bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
            }

            else if (raznicacheloveka == raznicabota) {
                cout << "ничья!" << endl;
            }

        }
        if (bankbota <= 0) {
            cout << "бот проиграл!" << endl;
        }
        else if (bankcheloveka <= 0) {
            cout << "бот победил!" << endl;
        }
        else {
            cout << ":) ";
        }
    }

}