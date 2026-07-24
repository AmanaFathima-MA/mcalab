package com.example.calculator;

import android.os.Bundle;

import android.view.View;

import android.widget.Button;

import android.widget.EditText;

import android.widget.TextView;

import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    EditText etNum1, etNum2;

    Button btnAdd, btnSub, btnMul, btnDiv;

    TextView tvResult;

    @Override

    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);

        etNum1 = findViewById(R.id.etNum1);

        etNum2 = findViewById(R.id.etNum2);

        btnAdd = findViewById(R.id.btnAdd);

        btnSub = findViewById(R.id.btnSub);

        btnMul = findViewById(R.id.btnMul);

        btnDiv = findViewById(R.id.btnDiv);

        tvResult = findViewById(R.id.tvResult);

        btnAdd.setOnClickListener(this);

        btnSub.setOnClickListener(this);

        btnMul.setOnClickListener(this);

        btnDiv.setOnClickListener(this);

    }

    @Override

    public void onClick(View v) {

        String s1 = etNum1.getText().toString().trim();

        String s2 = etNum2.getText().toString().trim();

        if (s1.isEmpty() || s2.isEmpty()) {

            Toast.makeText(this, "Enter both numbers", Toast.LENGTH_SHORT).show();

            return;

        }

        double num1 = Double.parseDouble(s1);

        double num2 = Double.parseDouble(s2);

        double result = 0;

        if (v.getId() == R.id.btnAdd) {

            result = num1 + num2;

            tvResult.setText("Result : " + result);

        } else if (v.getId() == R.id.btnSub) {

            result = num1 - num2;

            tvResult.setText("Result : " + result);

        } else if (v.getId() == R.id.btnMul) {

            result = num1 * num2;

            tvResult.setText("Result : " + result);

        } else if (v.getId() == R.id.btnDiv) {

            if (num2 == 0) {

                tvResult.setText("Cannot divide by zero");

            } else {

                result = num1 / num2;

                tvResult.setText("Result : " + result);

            }

        }

    }

}
