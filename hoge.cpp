#include <bits/stdc++.h>
using namespace std;

int main(){
    string sa, sb, sc;
    cin >> sa >> sb >> sc;
    map<char, string> m;
    m['A'] = sa;
    m['B'] = sb;
    m['C'] = sc;
    char turn = 'A';
    while(true){
        if (m[turn].size() == 0) {
            break;
        }

        string& cards = m[turn];
        turn = toupper(cards[0]);
        cards.erase(cards.begin());
    }
    cout << turn << "\n";
}
