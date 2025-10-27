/*
Program an automatic device to monitor the manufacturing of a drug. The device measures the temperature every 15 seconds and provides these measurement to your program.

Your program should first read two integers representing the minimum and maximum safe temperatures. Next, your program should continuously read temperatures (integers) that are being provided by the device. Once the chemical reaction is complete the device will send a value of -999, indicating to you that temperature readins are done. For each recorded temperature that is in the correct range (it could also be equal to the min or max values), your program should display the text "Nothing to report". But as soon as a temperature reaches an unsafe level your program must display the text "Alert!" and stop reading temperatures (although the device may continue sending temperature values).



Examples
Input:
10 20
15 10 20 0 15 -999
Output:
Nothing to report
Nothing to report
Nothing to report
Alert!


Input:
0 100
15 50 75 -999
Output:
Nothing to report
Nothing to report
Nothing to report
*/

#include <stdio.h>

int main(void) {
	int min = 0;
	int max = 0;
	int temp = 0;

	scanf_s(" %d %d %d", &min, &max, &temp);

	while ((temp >= min) && (temp <= max)) {
		printf("Nothing to report\n");
		scanf_s(" %d", &temp);
			
		if ((temp > max || temp < min) && temp != -999) {
			printf("Alert!");
		}
	}

	return 0;
}