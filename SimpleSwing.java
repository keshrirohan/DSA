import javax.swing.*;

public class SimpleSwing {
    public static void main(String[] args) {
        JFrame frame = new JFrame("My First Swing Program"); // Create a window
        JButton button = new JButton("Click Me");            // Create a button
        
        button.setBounds(100, 100, 100, 40);  // Position and size of button

        frame.add(button);                    // Add button to window
        frame.setSize(300, 300);              // Set window size
        frame.setLayout(null);                // No default layout
        frame.setVisible(true);               // Display window
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
