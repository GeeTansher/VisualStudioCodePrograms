int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        cout<<hex<<showbase<<nouppercase<<left;
        cout<<(long long)A<<endl;
        cout<<dec<<setprecision(2)<<fixed<<showpos<<right<<setw(15)<<setfill('_');
        cout<<B<<endl;
        cout<<setprecision(9)<<scientific<<uppercase<<left<<noshowpos;
        cout<<C<<endl;
    }
    return 0;

}
