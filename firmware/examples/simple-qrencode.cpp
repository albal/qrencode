#include <qrencode.h>

void setup()
{
	string wifiDetails = "WIFI:S:<ssid>;T:<wep|WPDA>;P;<password>;;";
	QRCode *qrcode;
	qrcode = QRcode_encodeString(wifiDetails);
}

void loop()
{
	// Does nothing
}