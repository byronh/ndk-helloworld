package com.byronh.ndk.helloworld;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

public class MainActivity extends Activity {

    static {
        System.loadLibrary("hello_cpp_module");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView textView = (TextView)findViewById(R.id.my_label);
        textView.setText(this.getStringFromNative());
    }

    public native String getStringFromNative();

}
