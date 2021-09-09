class PulseManager {
  public:
    PulseManager(int led, int timeMultiplier);
    void shortPulse();
    void longPulse();
    void shortDelay();
    void test();
    int led;
    int timeMultiplier;
};
