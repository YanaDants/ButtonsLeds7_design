int led_pin=3;          // пин подключения
int button_pin = 4;     // пин кнопки
void setup() { 
    pinMode(led_pin, OUTPUT); // Инициализируем цифровой вход/выход в режиме выхода.
    pinMode(button_pin, INPUT); // Инициализируем цифровой вход/выход в режиме входа.
}
void loop() {
   if (digitalRead(button_pin) == HIGH) { // Если кнопка нажата 
      digitalWrite(led_pin, HIGH);// зажигаем светодиод
 }
  else { //Иначе
      digitalWrite(led_pin, LOW);// выключаем светодиод
  }
}
