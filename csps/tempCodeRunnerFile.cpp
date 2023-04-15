int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        insert(s);
    }
    int m;
    cin >> m;
    while (m--) {
        cin >> s;
        int t = find(s);
        if (t == 0)
            cout << "NO";
        else
            cout << "exists " << t << endl;
    }
    return 0;
}
