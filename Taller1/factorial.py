import time

def factorial(number):
  if(number == 0 or number == 1):
    return 1
  else:
    return number*factorial(number-1)

t0 = time.time()
print("Python, resultado es: %d" % factorial(10))
print("El tiempo de ejecucion fue de %s segundos" % (time.time() - t0))