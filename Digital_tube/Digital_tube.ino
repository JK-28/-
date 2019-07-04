void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char i = Serial.read();
  switch (i)
  {
    case '0':
      {
        aL();
        bL();
        cL();
        dL();
      }
      break;
    case '1':
      {
        aH();
        bL();
        cL();
        dL();
      }
      break;
    case '2':
      {
        aL();
        bH();
        cL();
        dL();
      }
      break;
    case '3':
      {
        aH();
        bH();
        cL();
        dL();
      }
      break;
    case '4':
      {
        aL();
        bL();
        cH();
        dL();
      }
      break;
    case '5':
      {
        aH();
        bL();
        cH();
        dL();
      }
      break;
    case '6':
      {
        aL();
        bH();
        cH();
        dL();
      }
      break;
    case '7':
      {
        aH();
        bH();
        cH();
        dL();
      }
      break;
    case '8':
      {
        aL();
        bL();
        cL();
        dH();
      }
      break;
    case '9':
      {
        aH();
        bL();
        cL();
        dH();
      }
      break;
    default:
      break;
  }
  delay(500);
}

void aH()
{
  digitalWrite(4, HIGH);
}
void aL()
{
  digitalWrite(4, LOW);
} 
void bH()
{
  digitalWrite(5, HIGH);
} 
void bL()
{
  digitalWrite(5, LOW);
} 
void cH()
{
  digitalWrite(6, HIGH);
}
void cL()
{
  digitalWrite(6, LOW);
} 
void dH()
{
  digitalWrite(7, HIGH);
} 
void dL()
{
  digitalWrite(7, LOW);
}
