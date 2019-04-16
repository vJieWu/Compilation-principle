package bit.minisys.minicc.scanner;

public class MyScanner implements IMiniCCScanner {
    @Override
    public String run(String iFile) throws Exception {
        int len = iFile.length();
        String file_head = iFile.substring(0, len - 4);
        //start here


        System.out.println("2.Scanner Finished!");
        return file_head + "token.xml";
    }
}
