#include <iostream>
#include <vector>

struct ulamek{
    int l;
    int m;
};

void print(int num) {
    std::cout << num;
}
void print(double num) {
    std::cout << num;
}

void print(ulamek&ulamek) {
    std::cout << ulamek.l << "/" << ulamek.m;
}
void print(int tab[], int n){
    for(int i = 0; i < n; i++) {
        std::cout << tab[i] << " ";
    }
}
void print(...){
}
void print(int (&ar)[]){
    std::cout << ar;
}
void print(std::vector <int> v) {
    for( size_t i = 0; i < v.size(); i++ )
        std::cout << v[i];
}
std::string upper(std::string text) {
    for(auto &c:text) {
        if(c == 'd') {
            c = 'D';
        }
    }
    return text;
}

int main() {

    std::vector < int > v;
    v.push_back( 5 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 1 );
    print(v);
    
    return 0;

}
