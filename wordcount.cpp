//
//  wordcount.cpp
//  
//
//  Created by Marius Andreassen on 17/01/14.
//
//

#include "wordcount.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Wordcount!" << endl;
    
    int lineCount = 0, wordCount = 0;           //telle-variabler for linjer og ord

    string x;                                   //variabel for lagring av hver linje i cin string
    while(getline(cin, x))                      //henter en og en linje fra input
    {
        int last = 0;                           //variabel for å vite om det er nytt ord eller ikke
        lineCount++;                            //teller antall linjer i teksten
        for (int i = 0; i < x.length(); i++)    //itererer gjennom hver char
        {
            if(!isspace(x[i]))                  //hvis det ikke er whitespace er det et mulig nytt ord
            {
                if (last == 0)                  //sjekker om dette er et nytt ord
                {
                    wordCount++;
                    last = 1;                   //endrer last for å si ifra at dette ordet er registrert
                }
            }
            else
                last = 0;                       //betyr at det er whitespace, neste !whitespace betyr nytt ord
        }
    }
    
    cout << "Lines--> " << lineCount << endl;   //skriver ut antall linjer
    cout << "Words--> " << wordCount << endl;   //skriver ut antall ord
    
    return 0;
}