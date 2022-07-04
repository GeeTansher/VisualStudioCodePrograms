package com.company;

import javax.swing.*;

public class swingCalc<GridLayoutManager> extends JFrame {
    JTextField num1;
    JTextField num2;
    JButton b;
    JRadioButton sum,sub;
    JLabel l1,l2,l3;

    swingCalc() {
        num1 = new JTextField();
        num2 = new JTextField();
        l1 = new JLabel("Num 1");
        l2 = new JLabel("Num 2");
        l3 = new JLabel();
        b = new JButton("Result");
        sum = new JRadioButton("SUM");
        sub = new JRadioButton("SUB");

        add(l1);
        add(num1);
        add(l2);
        add(num2);
        add(sum);
        add(sub);
        add(b);
        add(l3);
        setSize(400,400);
        // setLayout(new FlowLayout());
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }

    public static void main(String[] args) {
        new swingCalc();
    }
}