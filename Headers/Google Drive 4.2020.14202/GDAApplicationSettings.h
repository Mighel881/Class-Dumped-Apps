//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface GDAApplicationSettings : NSObject
{
    _Bool _didPatchAutobackupMigrationBugIfNecessary;
    _Bool _hasShownWarmWelcomeInCurrentSession;
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_appGroupUserDefaults;
}

@property(retain, nonatomic) NSUserDefaults *appGroupUserDefaults; // @synthesize appGroupUserDefaults=_appGroupUserDefaults;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) _Bool hasShownWarmWelcomeInCurrentSession; // @synthesize hasShownWarmWelcomeInCurrentSession=_hasShownWarmWelcomeInCurrentSession;
@property(nonatomic) _Bool didPatchAutobackupMigrationBugIfNecessary; // @synthesize didPatchAutobackupMigrationBugIfNecessary=_didPatchAutobackupMigrationBugIfNecessary;
- (void).cxx_destruct;
@property(nonatomic, getter=isReportAbuseDryRunEnabled) _Bool reportAbuseDryRunEnabled;
@property(nonatomic) _Bool hasShownOSNotificationPermissionPrompt;
@property(nonatomic) _Bool hasShownPhotoLibraryAccessWarningForCamera;
@property(readonly, nonatomic, getter=isBreakpadEnabled) _Bool breakpadEnabled;
@property(readonly, copy, nonatomic) NSString *autoBackupUserID;
@property(nonatomic) _Bool didPurgeAllUnmigratedPreQuantumData;
@property(readonly, nonatomic) NSString *previousAppVersion;
@property(copy, nonatomic) NSString *activeUserID;
- (id)init;

@end

