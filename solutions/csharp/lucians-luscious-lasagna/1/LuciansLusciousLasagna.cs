class Lasagna
{
    public int ExpectedMinutesInOven()
    {
        return 40;
    }
    public int RemainingMinutesInOven(int time)
    {
        return 40 - time;
    }
    public int PreparationTimeInMinutes(int layers)
    {
        return layers * 2;
    }
    public int ElapsedTimeInMinutes(int layers, int time)
    {
        return (layers * 2) + time;
    }
}
