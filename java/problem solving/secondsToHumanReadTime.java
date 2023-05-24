package train;

public class Try {

	public static void main(String[] args) {

		int seconds = 59;
		int h, m, s;
		double num, Rnum;
		String ftime = "";
		num = (double) seconds / 3600;
		h = (int) num;
		Rnum = num - (int) num;
		num = Rnum * 60;
		m = (int) num;
		Rnum = num - (int) num;
		num = Rnum * 60;
		s = (int) Math.round(num);

		if (s == 60) {
			++m;
			s -= 60;
		}
		if (h < 10)
			ftime += "0";
		ftime += h + ":";
		if (m < 10)
			ftime += "0";
		ftime += m + ":";
		if (s < 10)
			ftime += "0";
		ftime += s;
		System.out.println(ftime);
	}
}
