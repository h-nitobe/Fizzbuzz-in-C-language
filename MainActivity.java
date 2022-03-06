package com.example.fizzbuzznitobe;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;         // Add nitobe
import android.graphics.Color;          // Add nitobe

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = findViewById(R.id.text_view);       // Add nitobe

        textView.setTextColor(Color.BLACK);                     // Add nitobe
        textView.setText("***** Hello ANDROID *****\n");        // Add nitobe

        for (int i = 1; i <= 100; i++) {                        // Add nitobe
            if ((i % 3) == 0) textView.append("Fizz");          // Add nitobe
            if ((i % 5) == 0) textView.append("Buzz");          // Add nitobe
            if ((i % 3) != 0 && (i % 5) != 0) textView.append(String.valueOf(i));   // Add nitobe
            textView.append(" ");                               // Add nitobe
        }
        textView.append("\n");                                  // Add nitobe
    }
}