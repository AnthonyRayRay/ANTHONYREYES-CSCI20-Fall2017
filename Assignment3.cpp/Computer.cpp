class computer {
    
   private:
    int _score;
   
    public:
    computer() {_score = 0;}
    computer(int score) {_score = score;}
    
    void SetScore(int score) {_score = score;}
    void ResetScore () {_score = 0;}
    int GetScore() { return _score;}
    
    void PrintScore() {
        cout << "\Computer Score is: " << Computer::GetScore();
        
    
    
    }
};