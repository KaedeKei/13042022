#include <iostream>
#include "time.h"
#include <cstdlib>

using namespace std;

//1 .
//
//int main()
//{
//    int default_array[5][5];
//    int arr[1];
//    int tmp;
//
//    srand(time(nullptr));
//
//    for ( int i = 0; i < 2; i++ )
//    {
//        for ( int j = 0; j < 5; j++ )
//        {
//            default_array[i][j] = rand() % 89 +10;
//        }
//    }
//
//    for ( int i = 0; i < 2; i++ )
//    {
//        for ( int j = 0; j < 5; j++ )
//        {
//            cout << default_array[i][j] << " ";
//        }
//
//        cout << endl;
//    }
//
//    for (int i = 0; i < 2; i++)
//    {
//        int temp = default_array[i][0];
//        int count = 0;
//        for (int j = 0; j < 5; j++)
//        {
//            if (default_array[i][j] > temp)
//            {
//                tmp = default_array[i][j];
//                count = j;
//            }
//        }
//        swap(default_array[i][0], default_array[i][count]);
//    }
//
//    cout << endl;
//
//    for ( int i = 0; i < 2; i++ )
//    {
//        for ( int j = 0; j < 5; j++ )
//        {
//            cout << default_array[i][j] << " ";
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}



//2.

//void memory(double *&ar, int number_of_strings, int length_of_string);
//void create(double *ar, int number_of_strings, int length_of_string);
//void show(double *ar, int number_of_strings, int length_of_string);
//void del(double *ar);
//
//int main()
//{
//    int number_of_strings;
//    int length_of_string;
//    double *default_array;
//    char tmp;
//
//    start:// так проще
//
//    cout << "Please, enter the number of strings in array: ";
//    cin >> tmp;
//    while (!isdigit(tmp))
//    {
//        cout << "try again: ";
//        cin >> tmp;
//    }
//    number_of_strings = atoi(&tmp);
//
//    cout << "Please, enter the length of strings in array: ";
//    cin >> tmp;
//    while (!isdigit(tmp)) // да, по идее, надо в отдельную функцию, но в данном задании повторить выйдет короче
//    {
//        cout << "try again: ";
//        cin >> tmp;
//    }
//    length_of_string = atoi(&tmp);
//
//    memory(default_array, number_of_strings, length_of_string);
//    create(&(*default_array), number_of_strings, length_of_string);
//    show(&(*default_array), number_of_strings, length_of_string);
//    del(default_array);
//
//    int answer;
//    cout << "Start again (1) or exit (2)? ";
//    cin >> answer;
//    while (answer != 1 && answer != 2)
//    {
//        cout << "try again: ";
//        cin >> answer;
//    }
//    if (answer == 1) goto start;
//    else cout << "bye";
//
//
//    return 0;
//}
//
//void memory(double *&ar, int number_of_strings, int length_of_string) {
//    ar = static_cast<double*>(malloc((number_of_strings * length_of_string * sizeof(double))));
//    if (!ar) {
//        cout << ("something goes wrong o_O.\n");
//        exit(1);
//    }
//}
//
//void create(double *ar, int number_of_strings, int length_of_string)
//{
//    srand(time(nullptr));
//    for (int i = 0; i < number_of_strings; i++ )
//    {
//        for ( int j = 0; j < length_of_string; j++ )
//        {
//            ar[i * length_of_string + j] = rand() % 9;
//        }
//    }
//}
//
//void show(double *ar, int number_of_strings, int length_of_string)
//{
//    for (int i = 0; i < number_of_strings; i++ )
//    {
//        for ( int j = 0; j < length_of_string; j++ )
//        {
//            cout << ar[i * length_of_string + j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void del(double *ar)
//{
//    free (ar);
//}



//3. o_O



//4.

//void create(int ar[], int number_of_strings, int length_of_string);
//void show(int ar[], int number_of_strings, int length_of_string);
//
//int main()
//{
//    int number_of_strings;
//    int length_of_string;
//    int default_array[number_of_strings][length_of_string];
//    char tmp;
//
//    cout << "Please, enter the number of strings in array: ";
//    cin >> tmp;
//    while (!isdigit(tmp))
//    {
//        cout << "try again: ";
//        cin >> tmp;
//    }
//    number_of_strings = atoi(&tmp);
//
//    cout << "Please, enter the length of strings in array: ";
//    cin >> tmp;
//    while (!isdigit(tmp)) // я всё ещё жопа ленивая
//    {
//        cout << "try again: ";
//        cin >> tmp;
//    }
//    length_of_string = atoi(&tmp);
//
//    create(*(default_array), number_of_strings, length_of_string);
//    show(*(default_array), number_of_strings, length_of_string);
//
//    return 0;
//}
//
//void create(int ar[], int number_of_strings, int length_of_string)
//{
//    for (int i = 0; i < number_of_strings; i++ )
//    {
//        for ( int j = 0; j < length_of_string; j++ )
//        {
//            ar[i * length_of_string + j] = rand() % 40 + 10;
//        }
//    }
//}
//
//void show(int ar[], int number_of_strings, int length_of_string)
//{
//    for (int i = 0; i < number_of_strings; i++ )
//    {
//        for ( int j = 0; j < length_of_string; j++ )
//        {
//            cout << ar[i * length_of_string + j] << " ";
//        }
//        cout << endl;
//    }
//}



//5.

//void create_and_show (int ar[], int size);
//int return_dates(char x); // пришлось-таки((
//
//int main()
//{
//    int first_arr_number_of_elements;
//    int second_arr_number_of_elements;
//    char tmp;
//
//    cout << "Please, enter the number of elements in your 1-st array: ";
//    cin >> tmp;
//    first_arr_number_of_elements = return_dates(tmp);
//
//    cout << "Please, enter the number of elements in your 2-nd array: ";
//    cin >> tmp;
//    second_arr_number_of_elements = return_dates(tmp);
//
//    int default_array_1[first_arr_number_of_elements];
//    int default_array_2[second_arr_number_of_elements];
//
//    create_and_show(&*(default_array_1), first_arr_number_of_elements);
//    create_and_show(&*(default_array_2), second_arr_number_of_elements);
//
//    return 0;
//}
//
//void create_and_show (int ar[], int size)
//{
//
//    for (int i = 0; i < size; i++ )
//    {
//        ar[i] = rand() % 9;
//    }
//
//    for (int i = 0; i < size; i++ )
//    {
//        cout << ar[i] << " ";
//    }
//    cout << endl;
//}
//
//int return_dates(char x)
//{
//    int result;
//    while (!isdigit(x))
//    {
//        cout << "try again: ";
//        cin >> x;
//    }
//    result = atoi(&(x));
//    return result;
//}



//6.

//void create_and_show (int ar[], const int size); // посмотреть-то тоже неплохо...
//int max(int ar[], const int size);
//int min(int ar[], const int size);
//
//int main()
//{
//    const int size = 5;
//    int default_array[size][size];
//
//    create_and_show(*(default_array), size);
//    cout << "Max. element = " << max(*(default_array), size) << endl;
//    cout << "Min. element = " << min(*(default_array), size) << endl;
//
//    return 0;
//}
//
//void create_and_show (int ar[], const int size)
//{
//    srand(time(nullptr));
//    for (int i = 0; i < size; i++ )
//    {
//        for (int j = 0; j < size; j++ )
//        ar[i * size + j] = rand() % 30 + 30;
//    }
//
//    for (int i = 0; i < size; i++ )
//    {
//        for (int j = 0; j < size; j++ )
//            cout << ar[i * size + j] << " ";
//        cout<< endl;
//    }
//}
//
//int max(int ar[], const int size)
//{
//    int val = 0;
//
//    for (int i = 0; i < (size*size); i++ )
//    {
//        if (val < ar[i])
//        {
//            val = ar[i];
//
//        }
//    }
//
//    return val;
//}
//
//int min (int ar[], const int size)
//{
//    int val = 61;
//
//    for (int i = 0; i < (size*size); i++ )
//    {
//        if (val > ar[i])
//        {
//            val = ar[i];
//        }
//    }
//
//    return val;
//}

//8.

//int main()
//{
//    const int size = 4;
//    int arr [size] = {5, 6, 7, 8};
//
//    for (int i = 0; i < size ; i++) { cout << arr[i] << " "; }
//    cout << endl;
//
//    for (int i = 0; i < (size / 2) ; i++) {
//        int buf = arr[i];
//        arr[i] = arr[size - i -1 ];
//        arr[size - i - 1] = buf;
//    }
//
//    for (int i = 0; i < size ; i++) { cout << arr[i] << " "; }
//
//    return 0;
//}

//9.

//int main()
//{
//    int hight;
//    int lenght;
//    float correction;
//    char tmp;
//
//    cout << "Enter thi hight of your pyramid: ";
//    cin >> tmp;
//    while (!isdigit(tmp))
//    {
//        cout << "try again: ";
//        cin >> tmp;
//    }
//    hight = atoi(&tmp);
//
//    lenght = (hight * 2);
//
//    char arr[hight][lenght];
//
//    cout << endl;
//
//    for (int i = 0; i < hight; i++)
//    {
//        for (int j = 0; j < lenght; j++)
//        {
//            arr[i][j] = ' ';
//        }
//    }
//
//    for (int i = 0; i < lenght; i++)
//    {
//        arr[hight-1][i] = '_';
//    }
//
//    int count = 0;
//    for (int i = 0; i < hight; i++)
//    {
//        for (int j = 0; j < ((lenght / 2)); j++)
//        {
//            arr[i][(lenght / 2) - 1 - count] = '/';
//        }
//        count++;
//    }
//
//    count = 0;
//    for (int i = 0; i < hight; i++)
//    {
//        for (int j = 0; j < ((lenght / 2)); j++)
//        {
//            arr[i][(lenght / 2) + count] = '\\';
//        }
//        count++;
//    }
//
//    for (int i = 0; i < count; i++)
//    {
//        for (int j = 0; j < lenght; j++)
//        {
//            cout << arr[i][j];
//        }
//        cout << endl;
//    }
//
//    return 0;
//}