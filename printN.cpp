class Solution{
    public:

    void printNos(int N)
    {
        if(N<=1){
            for(int i= 1;i<=N;i++){
                cout<<N<<" ";
                printNos(N--);

            }
        }
    }
};