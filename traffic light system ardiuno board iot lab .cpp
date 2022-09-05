int Red_1 = 13;
int Yellow_1 = 12;
int Green_1 = 11;
int Red_2 = 10;
int Yellow_2 = 9;
int Green_2 = 8;
int Red_3 = 7;
int Yellow_3 = 6;
int Green_3 = 5;
int Red_4 = 4;
int Yellow_4 = 3;
int Green_4 = 2;

void Direction_1_Green(void)
{
  digitalWrite(Green_1, HIGH);
  digitalWrite(Yellow_4, LOW);

  digitalWrite(Red_2, HIGH);
  digitalWrite(Red_3, HIGH);
  digitalWrite(Red_4, HIGH);
}
void Direction_1_Yellow(void)
{
  digitalWrite(Green_1, LOW); 
  digitalWrite(Yellow_1, HIGH);
}
void Direction_2_Green(void)
{  
  digitalWrite(Red_1, HIGH); 
  digitalWrite(Red_2, LOW);
  digitalWrite(Yellow_1, LOW);

  digitalWrite(Green_2,HIGH );
}
void Direction_2_Yellow(void)
{ 
  digitalWrite(Green_2,LOW );  
  digitalWrite(Yellow_2, HIGH); 
}
void Direction_3_Green(void)
{
  digitalWrite(Red_2, HIGH); 
  digitalWrite(Red_3, LOW);
  digitalWrite(Yellow_2, LOW);

  digitalWrite(Green_3, HIGH);
}
void Direction_3_Yellow(void)
{
  digitalWrite(Green_3, LOW);
  digitalWrite(Yellow_3, HIGH);
}
void Direction_4_Green(void)
{
  digitalWrite(Red_3, HIGH);
  digitalWrite(Red_4, LOW);
  digitalWrite(Yellow_3, LOW);

  digitalWrite(Green_4, HIGH);
}
void Direction_4_Yellow(void)
{
  digitalWrite(Green_4,LOW);
  digitalWrite(Yellow_4, HIGH);
}
void setup()
{
  for(int i=2;i<=13;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  Direction_1_Green();
  delay(5000); // Wait for 1000 millisecond(s)
   Direction_1_Yellow();
  delay(3000); // Wait for 1000 millisecond(s)
   Direction_2_Green();
  delay(5000); // Wait for 1000 millisecond(s)
   Direction_2_Yellow();
  delay(3000); // Wait for 1000 millisecond(s)
   Direction_3_Green();
  delay(5000); // Wait for 1000 millisecond(s)
   Direction_3_Yellow();
  delay(3000); // Wait for 1000 millisecond(s)
   Direction_4_Green();
  delay(5000); // Wait for 1000 millisecond(s)
   Direction_4_Yellow();
  delay(3000); // Wait for 1000 millisecond(s)

}

// int Red_1 = 13;
// int Yellow_1 = 12;
// int Green_1 = 11;
// int Red_2 = 10;
// int Yellow_2 = 9;
// int Green_2 = 8;
// int Red_3 = 7;
// int Yellow_3 = 6;
// int Green_3 = 5;
// int Red_4 = 4;
// int Yellow_4 = 3;
// int Green_4 = 2;

// void Direction_1_Green(void)
// {
//   digitalWrite(Red_1, LOW);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, HIGH);
//   digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_1_Yellow(void)
// {
//   digitalWrite(Red_1, LOW);
//   digitalWrite(Yellow_1, HIGH);
//   digitalWrite(Green_1, LOW);
//   digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_2_Green(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//   digitalWrite(Red_2, LOW);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2,HIGH );
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_2_Yellow(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//     digitalWrite(Red_2, LOW);
//   digitalWrite(Yellow_2, HIGH);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_3_Green(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//   digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, LOW);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, HIGH);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_3_Yellow(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//     digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, LOW);
//   digitalWrite(Yellow_3, HIGH);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, HIGH);
//   digitalWrite(Yellow_4,LOW);
//   digitalWrite(Green_4, LOW);
// }
// void Direction_4_Green(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//   digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4,LOW );
//   digitalWrite(Yellow_4, LOW);
//   digitalWrite(Green_4, HIGH);
// }
// void Direction_4_Yellow(void)
// {
//   digitalWrite(Red_1, HIGH);
//   digitalWrite(Yellow_1, LOW);
//   digitalWrite(Green_1, LOW);
//   digitalWrite(Red_2, HIGH);
//   digitalWrite(Yellow_2, LOW);
//   digitalWrite(Green_2, LOW);
//   digitalWrite(Red_3, HIGH);
//   digitalWrite(Yellow_3, LOW);
//   digitalWrite(Green_3, LOW);
//   digitalWrite(Red_4, LOW);
//   digitalWrite(Yellow_4, HIGH);
//   digitalWrite(Green_4, LOW);
// }
// void setup()
// {
//   for(int i=2;i<=13;i++)
//   pinMode(i, OUTPUT);
// }

// void loop()
// {
//   Direction_1_Green();
//   delay(5000); // Wait for 1000 millisecond(s)
//    Direction_1_Yellow();
//   delay(3000); // Wait for 1000 millisecond(s)
//    Direction_2_Green();
//   delay(5000); // Wait for 1000 millisecond(s)
//    Direction_2_Yellow();
//   delay(3000); // Wait for 1000 millisecond(s)
//    Direction_3_Green();
//   delay(5000); // Wait for 1000 millisecond(s)
//    Direction_3_Yellow();
//   delay(3000); // Wait for 1000 millisecond(s)
//    Direction_4_Green();
//   delay(5000); // Wait for 1000 millisecond(s)
//    Direction_4_Yellow();
//   delay(3000); // Wait for 1000 millisecond(s)

// }
