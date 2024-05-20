



class Character {
private:
    int _strength;
    int _charm;
    int _dexterity;
    int _constitution;
    int _intelligence;
    int _wisdom;
     
     
     bool positiveCondition(int number){
        if(number > 0 && number < 20){
            return true;
        }
        return false;
    }

public:  
    Character( int strength,
    int charm,
    int dexterity,
    int constitution,
    int intelligence,
    int wisdom){
    _strength=strength;
    _charm= charm;
    _dexterity = dexterity;
    _constitution = constitution;
    _wisdom = wisdom;
    _intelligence = intelligence;
    }

    int getCharm(){
        return _charm;
    }
      int getStrength(){
        return _strength;
    }
      int getDexterity(){
        return _dexterity;
    }
    int getWisdom(){
        return _wisdom;
    }
    int getIntelligence(){
        return _intelligence;
    }
    int getConstitution(){
        return _constitution;
    }
    void setConstitution(int constitution){
        if(positiveCondition(constitution)){
            _constitution = constitution;
        }
    }
       void setIntelligence(int intelligence){
        if(positiveCondition(intelligence)){
            _intelligence = intelligence;
        }
        
    }
        void setWisdom(int wisdom){
        if(positiveCondition(wisdom)){
            _wisdom = wisdom;
        }
        
    }
       void setCharm(int charm){
        if(positiveCondition(charm)){
            _charm = charm;
        }
    }
       void setDexterity(int dexterity){
        if(positiveCondition(dexterity)){
            _dexterity = dexterity;
        }
    }
        void setStrength(int strength){
            if(positiveCondition(strength)){
                _strength = strength;
            }
        }

        int mapNumber(int number){
            return (number/2 -5);
        }
    };
