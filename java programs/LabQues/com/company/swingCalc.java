package com.company;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class swingCalc extends JFrame implements ActionListener {
    JTextField num1;
    JTextField num2;
    JButton b;
    JRadioButton sum, sub;
    JLabel l1, l2, l3;

    swingCalc() {
        num1 = new JTextField(20);
        num2 = new JTextField(20);
        l1 = new JLabel("Num 1");
        l2 = new JLabel("Num 2");
        l3 = new JLabel();
        b = new JButton("Result");
        sum = new JRadioButton("SUM");
        sub = new JRadioButton("SUB");

        ButtonGroup bg = new ButtonGroup();
        bg.add(sum);
        bg.add(sub);

        add(l1);
        add(num1);
        add(l2);
        add(num2);
        add(sum);
        add(sub);
        add(b);
        add(l3);
        setSize(300, 400);
        setLayout(new FlowLayout());
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        b.addActionListener(this);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        int n = Integer.parseInt(num1.getText());
        int m = Integer.parseInt(num2.getText());
        if (sub.isSelected()) {
            int r = n - m;
            l3.setText(String.valueOf(r));
        } else if (sum.isSelected()) {
            int r = n + m;
            l3.setText(String.valueOf(r));
        } else {
            l3.setText("Choose any one.");
        }
    }

    public static void main(String[] args) {
        new swingCalc();
    }
}