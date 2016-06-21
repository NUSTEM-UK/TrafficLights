from gpiozero import LED
from time import sleep

red = LED(17)
amber = LED(27)
green = LED(22)

delay = 0.5

while True:
	red.on()
	amber.off()
	sleep(delay * 2)
	amber.on()
	sleep(delay)
	red.off()
	amber.off()
	green.on()
	sleep(delay)
	green.off()
	amber.on()
	sleep(delay)
