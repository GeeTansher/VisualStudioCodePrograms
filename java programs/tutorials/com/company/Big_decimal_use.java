package com.company;
import java.math.BigDecimal;
import java.math.RoundingMode;

public class Big_decimal_use {
    public Big_decimal_use() {
    }

    public static void main(String[] args) {
        int i = 20;
        System.out.println(i / 3);
        System.out.println(i - 18);
        System.out.println((double)i / 3.0D);
        BigDecimal rideFee = BigDecimal.valueOf(20L).setScale(2);
        BigDecimal amountOfPeople = BigDecimal.valueOf(3L);
        BigDecimal chargePerPerson = rideFee.divide(amountOfPeople, RoundingMode.HALF_UP);
        System.out.println(chargePerPerson);
        double d = 3.1D;
        double d2 = 1.21D;
        System.out.println(d - d2);
        BigDecimal bd3 = BigDecimal.valueOf(3.1D).setScale(2);
        BigDecimal bd4 = BigDecimal.valueOf(1.21D).setScale(2);
        System.out.println(bd3.subtract(bd4));
    }
}
