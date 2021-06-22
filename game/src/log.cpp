// Add down

#ifdef ENABLE_LOG_PM
void LogManager::WhisperLog(const char * from, const char * to, const char * message)
{
	// sql inject exploit fix
	m_sql.EscapeString(__escape_hint, sizeof(__escape_hint), message, strlen(message));
	Query("INSERT INTO whisper_log (from, to, text) VALUES ('%s', '%s', '%s')", from, to, __escape_hint);
}
#endif