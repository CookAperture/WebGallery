echo on
robocopy "app_root" "x64\Debug\app_root" /MIR
robocopy "doc_root" "x64\Debug\doc_root" /MIR
pause