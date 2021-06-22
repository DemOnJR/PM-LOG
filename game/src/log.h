// Find
		void		InvalidServerLog(enum eLocalization eLocaleType, const char* pcszIP, const char* pszRevision);

// Add
#ifdef ENABLE_LOG_PM
		void		WhisperLog(const char * from, const char * to, const char * message);
#endif