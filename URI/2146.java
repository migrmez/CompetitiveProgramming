import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while ((line = in.readLine()) != null) {
			StringTokenizer s = new StringTokenizer(line);
			int n = Integer.valueOf(s.nextToken());
			System.out.println((n - 1));
		}
	}
}
