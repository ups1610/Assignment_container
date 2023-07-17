long long toh(int N, int from, int to, int aux) {
        if(N==1){
            cout<<"move disk "<<1<<" from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
        int res=toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        res+=toh(N-1,aux,to,from);
        return res+1;
    }