void loop() {
  //  microphone check every 1 second
  if (mic_Metro.check() == 1) {
    if (analogRead(MIC) > 1000) {
      count_voice++;
    }
  }

  //  notify when baby is crying more than 5 minutes
  if (count_voice > 300) { //  1 minute have 60 seconds
    Line_Notify(message);
    count_voice = 0;
  }

  //  get firebase status
  id_get = Firebase.getString("pc/cradle_id");
  io_status = Firebase.getInt("pc/data");

  //  send firebase status to arduino
  if (id_get == CRADLE_ID) {
    digitalWrite(TX, io_status);
  }
}
