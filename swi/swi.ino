/* created on 01-04-2020
 *  
 *Author : bmhegde18
 *Last editted : 01-04-2020
 * 
 * main file for SineWaveInverter project
 ------------------------------------------
 Pinouts
 Digital PWMs : D3,D5,D6,D9,D10,D11
 Analoge pins : A0 to A7
 I2C          : A4 - SDA, A5- SCL
 SPI          : D13 - SCK, D12- MISO, D11- MOSI, D10-SS
 */

#define SPWM 3
int i=0;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(SPWM, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


for (i=0;i<=50;i++)
{

  analogWrite(SPWM,i);
  
  }
}
