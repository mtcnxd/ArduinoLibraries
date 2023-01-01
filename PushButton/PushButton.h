class PushButton
{
    int pressed = false;
    int pushButtonPressed;

  public:
    PushButton(int pin) {
      pinMode(pushButtonPressed, INPUT_PULLUP);
    }

  public :
    void PushButtonPressed() {
      if (pushButtonPressed && !pressed) {
        pressed = true;
      } else if (!pushButtonPressed && pressed) {
        pressed = false;
      }
    }

};
