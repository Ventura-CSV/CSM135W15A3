#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LEN = 20;
const int NUM_SCORES = 3;
struct Students
{
        int sid;
        char sname[MAX_LEN];
        double scores[NUM_SCORES];
};

void bubbleSort(Students[], int);
void makeStudents(Students[], int);
void printStudents(Students[], int);

void bubbleSort(Students s[], int N)
{
        /*******************************
         * Code your program here
         *******************************/
}

void makeStudents(Students s[], int N)
{
        ifstream ifs;
        ifs.open("students.txt");
        if (ifs.fail())
        {
                cerr << "File Open Error\n";
                exit(0);
        }

        for (int i = 0; i < N; i++)
        {
                ifs >> s[i].sid >> s[i].sname;
                for (int j = 0; j < NUM_SCORES; j++)
                        ifs >> s[i].scores[j];
                if (ifs.fail())
                {
                        cerr << "File Read Error\n";
                        exit(0);
                }
        }
}

void printStudents(Students s[], int N)
{
        for (int i = 0; i < N; i++)
        {
                cout << s[i].sid << "\t" << s[i].sname << "\t";
                for (int j = 0; j < NUM_SCORES; j++)
                        cout << s[i].scores[j] << "\t";
                cout << endl;
        }
        cout << "==== End of Record === \n";
}