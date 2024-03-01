class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N=s.length();//C++的字串的長度
        int one=0; //s裡面，有幾個1呢？等一下會慢慢數出來
        for(int i=0; i<N;i++){ //C/C++迴圈(有緣括號
            if(s[i]=='1')one+=1; //if(判斷)也有圓括號
        }
        //printf("N:%d",N,one);//先印出來，有幾個1
        string ans;
        for(int i=0; i<one-1; i++)ans+='1';
        for(int i=0; i<N-one; i++)ans+='0';
        ans+='1';//最後塞個1
        return ans;
        
    }
};