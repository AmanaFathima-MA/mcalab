package com.example.loginapp;

import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        EditText username = findViewById(R.id.Username);
        EditText password = findViewById(R.id.Password);
        Button login = findViewById(R.id.button);

        login.setOnClickListener(v ->{
            if(username.getText().toString().equals("admin") && password.getText().toString().equals("1234")) {
                Toast.makeText(this, "Login Succesfull", Toast.LENGTH_LONG).show();
            }else {
                Toast.makeText(this, "Login Failed", Toast.LENGTH_LONG).show();
            }
        });

        }
    }









