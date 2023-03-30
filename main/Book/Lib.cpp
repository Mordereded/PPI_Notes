class library :public otdel {
    otdel arr_of_otdel[10];
    string nameOfLibrary;
    int numberOfOtdel = 0;
public:
    void set_nameOfLibrary() {
        cout << "Название библиотеки: ";
        cin >> nameOfLibrary;
    }

    string get_nameOfLibrary() {
        return nameOfLibrary;
    }
    void addOtdel() {
        if (numberOfOtdel + 1 <= 10) {
            numberOfOtdel++;
            cout << "Название отделa: ";
            cin >> arr_of_otdel[numberOfOtdel - 1].nameOfOtdel;
            cout << "Новый отдел успешно добавлен!" << endl;
        }
        else cout << "Недостаточно памяти для добавления нового объекта!" << endl << endl;
    }
    void delOtdel() {
        int number_of_deleted_otdel;
        cout << "Введите номер удаляемой записи: ";
        cin >> number_of_deleted_otdel;
        number_of_deleted_otdel--;
        for (int i = number_of_deleted_otdel; i < numberOfOtdel - 1; i++)
            arr_of_otdel[i] = arr_of_otdel[i + 1];
        numberOfOtdel--;
        cout << "Отдел удален!" << endl << endl;
    }
    void see() {
        for (int i = 0; i < numberOfOtdel; i++) {
            cout << arr_of_otdel[i].nameOfOtdel << endl;
        }
        cout << endl;
    }
};