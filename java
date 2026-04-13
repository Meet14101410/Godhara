public class GodharaCity {
    private final String name = "Godhara";
    private final String district = "Panchmahal";
    private final String economy = "Panchamrut Dairy & Trading";

    public void displayProfile() {
        System.out.println("Exploring Godhara City");
        System.out.println("----------------------");
        System.out.println("Name:     " + name);
        System.out.println("District: " + district);
        System.out.println("Economy:  " + economy);
        System.out.println("Note:     Strategic hub connecting Central & East Gujarat.");
    }

    public static void main(String[] args) {
        new GodharaCity().displayProfile();
    }
}
