// By Cleetus @ DayZ Discord
// returns characters in string up until selected character
public string GetStringUntilStopChar(this string text, string stopAt = "<") {
    if (text != "" && text != NULL) {
        int charLocation = text.IndexOf(stopAt);

        if (charLocation > 0) {
            return text.Substring(0, charLocation);
        }
    }
    return text;
}