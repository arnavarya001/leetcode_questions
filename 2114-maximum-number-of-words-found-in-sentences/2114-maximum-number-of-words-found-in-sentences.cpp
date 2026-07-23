class Solution {
public:
    int mostWordsFound(vector<string>& sentences){
        int maxWords = 0;       
        for (const string& sentence : sentences){
            int spaces = 0;
            for (char c : sentence){
                if (c == ' ') {
                    spaces++;
                }
    }
            maxWords= max(maxWords,spaces+1);
}
        return maxWords;
}
};