package com.example.myapplication;


import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText editNumber;
    Button btnFind;
    TextView txtResult;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editNumber = findViewById(R.id.editNumber);
        btnFind = findViewById(R.id.btnFind);
        txtResult = findViewById(R.id.txtResult);

        btnFind.setOnClickListener(v -> {
            String input = editNumber.getText().toString();

            if (input.isEmpty()) {
                txtResult.setText("Please enter a number");
                return;
            }

            int n = Integer.parseInt(input);
            long factorial = 1;

            for (int i = 1; i <= n; i++) {
                factorial *= i;
            }

            txtResult.setText("Factorial = " + factorial);
        });
    }
}
