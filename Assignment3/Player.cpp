
class Player {
    
    private:
    int _score;
    
    public:
    
    Player() { _score = 0;}
    Player(int score) { _score = score;}
    
    void SetScore(int score = score); { _score = score;}
    void ResetScore() { _score = 0;}
    int GetScore() {return _score;)
    
    void PrintScore() {
        cout << "\nYour Score is: " << Computer::GetScore();
        
    
   
    }
    
    
};

