#pragma once
#include <afx.h>
#include <math.h>

class compareCS :
	public CObject
{
	int com_an, com_in, level = 4;

public:
	compareCS(int c1, int c2, int lev) {
		com_an = c1;
		com_in = c2;
		level = lev;
	}

	CString compare() {
		int anum[6] = { 0 };
		anum[0] = com_an % 10;
		anum[1] = com_an / 10 % 10;
		anum[2] = com_an / 100 % 10;
		anum[3] = com_an / 1000 % 10;
		anum[4] = com_in / 10000 % 10;
		anum[5] = com_in / 10000 % 10;


		if (com_in == com_an) {
			return (_T("정답!"));
		}
		else {

			int strike = 0;
			int ball = 0;
			int inum[6];

			inum[0] = com_in % 10;
			inum[1] = com_in / 10 % 10;
			inum[2] = com_in / 100 % 10;
			inum[3] = com_in / 1000 % 10;
			inum[4] = com_in / 10000 % 10;
			inum[5] = com_in / 100000 % 10;

			for (int i = 0; i < level; i++) {
				for (int j = 0; j < level; j++) {
					if (inum[i] == anum[j]) {
						if (i == j)
							strike++;
						else
							ball++;
					}
				}
			}
			CString response;
			CString A;
			CString B;
			CString C;
			CString D;
			A.Format(_T("%d"), strike);
			B.Format(_T("%d"), ball);
			C = "틀림 ㅋ 스트라이크 : ";
			D = " 볼 : ";
			response = C + A + D + B;
			return (response);
		}
	}
};