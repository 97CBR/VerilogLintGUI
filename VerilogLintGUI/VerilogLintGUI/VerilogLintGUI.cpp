#include "VerilogLintGUI.h"

bool isIndexBitRead(int index)
{
	unsigned char data[4] = {0b00000000, 0b00100000, 0b00000000, 0b00000000}; // 4*8/2 = 16 ���ߣ�32��bit
	int x = index * 2 / 8;  // index/ 4 ȷ�Ͼ�����
	int offset = index % 4; // 
	qDebug("XXXXXXXXX = %d", (data[x] >> ((4 - offset) * 2)) & 0b01);
	return true;
}

VerilogLintGUI::VerilogLintGUI(QWidget* parent)
	: QMainWindow(parent)
{
	isIndexBitRead(6);
	// ui.setupUi(this);
	// setWindowIcon(QIcon(":/VerilogLintGUI/Resource/icon.png"));
}
