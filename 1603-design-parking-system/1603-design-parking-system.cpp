class ParkingSystem {
public:
    ParkingSystem(int BigSpaces, int MediumSpaces, int SmallSpaces) {
        Spaces[1] = BigSpaces;
        Spaces[2] = MediumSpaces;
        Spaces[3] = SmallSpaces;
    }
    
    bool addCar(int CarType) {
        if (Spaces[CarType] != 0)
        {
            Spaces[CarType]--;
            return true;
        }
        
        return false;
    }
    
private:
    int Spaces[4];
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */