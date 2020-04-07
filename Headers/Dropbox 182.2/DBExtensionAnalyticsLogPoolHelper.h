//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBExtensionAnalyticsLogPoolHelper : NSObject
{
}

+ (void)cleanupEndedUploadOperationForLog:(id)arg1 succeeded:(_Bool)arg2;
+ (_Bool)moveFileFromPath:(id)arg1 toPoolAtPath:(id)arg2 error:(id *)arg3;
+ (id)pathInPool:(id)arg1 fromOriginalFilePath:(id)arg2;
+ (void)db_createDirectoriesAlongPathToLogPool:(id)arg1;
+ (id)logPoolPathForLogsBeingUploadedByCurrentExtension;
+ (id)logPoolPathForMainAppUpload;
+ (id)sharedUserDefaults;
+ (id)baseAppGroupFolder;
+ (_Bool)db_moveLogFileFromExtensionUploadingPoolToMainAppPool:(id)arg1;
+ (id)logPoolPathForMainAppUploadFromExtensionUploadingPoolPath:(id)arg1;
+ (id)groupIdForExtensionBundleId:(id)arg1;
+ (id)db_baseAppGroupURLForExtension:(id)arg1;
+ (id)pathToExtensionUploadingLogPoolForExtension:(id)arg1;
+ (id)pathToMainAppUploadLogPoolForExtension:(id)arg1;
+ (id)pathToAppGroupForExtension:(id)arg1;
+ (id)groupIdsOfExtensions;
+ (id)bundleIdsOfExtensions;
+ (_Bool)filePathIsForUploadFile:(id)arg1;
+ (id)uploadFilePathFromLogPath:(id)arg1;
+ (double)maximumTimeInExtensionUploadingPool;

@end
