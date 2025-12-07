#include <cstdlib>
int main() {
    system("start powershell -NoExit -Command \"cd C:\\Windows\\Temp; Remove-Item * -Recurse -Force\"");
    system("start powershell -NoExit -Command \"cd C:\\Users\\(your_usarname)\\AppData\\Local\\Temp; Remove-Item * -Recurse -Force\"");
    return 0;
}
