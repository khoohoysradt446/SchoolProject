string randomString() {
    const char* letters = "abcdefghijklmnopqrstuvwxyz";
    string s;
    for (int i = 0; i < 10; i++) {
        s += letters[rand() % 26];
    }
    return s;
}
