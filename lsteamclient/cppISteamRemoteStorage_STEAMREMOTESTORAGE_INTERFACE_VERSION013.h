#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(void *, const char *, const void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(void *, const char *, void *, int32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(void *, const char *, const void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(void *, const char *, uint32, uint32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(void *, SteamAPICall_t, void *, uint32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(void *, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(void *, const char *, ERemoteStoragePlatform);
extern UGCFileWriteStreamHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(void *, UGCFileWriteStreamHandle_t, const void *, int32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(void *, UGCFileWriteStreamHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(void *, UGCFileWriteStreamHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(void *, const char *);
extern int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(void *, const char *);
extern ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(void *);
extern const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(void *, int, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(void *, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(void *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(void *);
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(void *, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(void *, UGCHandle_t, uint32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(void *, UGCHandle_t, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(void *, UGCHandle_t, AppId_t *, char **, int32 *, CSteamID *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(void *, UGCHandle_t, void *, int32, uint32, EUGCReadAction);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(void *);
extern UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(void *, int32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(void *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType);
extern PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(void *, PublishedFileUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(void *, PublishedFileUpdateHandle_t, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(void *, PublishedFileUpdateHandle_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(void *, PublishedFileId_t, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(void *, CSteamID, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(void *, EWorkshopVideoProvider, const char *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(void *, PublishedFileId_t, EWorkshopFileAction);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(void *, EWorkshopFileAction, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(void *, EWorkshopEnumerationType, uint32, uint32, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(void *, UGCHandle_t, const char *, uint32);
#ifdef __cplusplus
}
#endif
