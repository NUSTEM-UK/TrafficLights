/* When the BBC micro:bit runs       */
function onStart(  ){
	globals.delay = 500;
	while (true) {
		microbit.writePinDigital(0, true);
		microbit.writePinDigital(1, false);
		wait(globals.delay * 2);
		microbit.writePinDigital(1, true);
		wait(globals.delay);
		microbit.writePinDigital(2, true);
		microbit.writePinDigital(0, false);
		microbit.writePinDigital(1, false);
		wait(globals.delay);
		microbit.writePinDigital(2, false);
		microbit.writePinDigital(1, true);
		wait(globals.delay);
	}
}