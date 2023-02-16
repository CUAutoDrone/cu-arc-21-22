package kd;

import java.util.*;

public class UniqueRng implements Iterator<Integer> {
    private List<Integer> numbers = new ArrayList<>();

    public UniqueRng(int n) {
        for (int i = 1; i <= n; i++) {
            numbers.add(i);
        }

        Collections.shuffle(numbers);
    }
    
    @Override
    public Integer next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        return numbers.remove(0);
    }

    @Override
    public boolean hasNext() {
        return !numbers.isEmpty();
    }
}