

float suma(float x, float y){
  float result = x + y;
  return result;
}

float resta(float x, float y){
  float result = x - y;
  return result;
}

float multiplicacion(float x, float y){
  float result = x * y;
  return result;
}

float division (float x, float y){
  float result = x / y;
  return result;
}

float raiz(float x){
  float temp, result;
  result = x / 2;
  temp = 0;
  while (result != temp){
      temp = result;
      result = (x / temp + temp) / 2;
  }
  return result;
}
