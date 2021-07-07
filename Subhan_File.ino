char incoming_value=0;
void setup(){
  Serial.begin(9600);
  pinMode(10,OUTPUT);
}
void loop(){
  if(Serial.available()>0)
  {
    incoming_value=Serial.read();
    Serial.print(incoming_value);
    Serial.print("/n");
    if(incoming_value=='1')
    digitalWrite(10,HIGH);
    else if(incoming_value=='0')
    digitalWrite(10,LOW);
  }
}
