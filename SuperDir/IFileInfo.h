class IFileInfo
{
	IFileInfo** FindFiles(const char* aFolder) {
		IFileInfo** TableauPointeur = new IFileInfo * [100];
		return TableauPointeur;
	}

	virtual void Init(const char* aFolder, const char* aFile) = 0;
	virtual void RetrieveInformation() = 0;
	virtual void DisplayInformation() = 0;

	/*public:
		virtual ~IFileInfo() {}
		IFileInfo** FindFiles(const char* aFolder);
		virtual void Init(const char* aFolder, const char* aFile) = 0;*/
};