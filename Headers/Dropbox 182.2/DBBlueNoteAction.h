//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDropboxPath, NSString, NSURL;

@interface DBBlueNoteAction : NSObject
{
    NSString *_label;
    unsigned long long _actionType;
    unsigned long long _contextType;
    DBDropboxPath *_path;
    NSURL *_shmodelURL;
    NSString *_urlPath;
    NSString *_sharedContentUrl;
}

+ (id)actionIdentifierFromActionType:(unsigned long long)arg1;
+ (unsigned long long)actionTypeFromActionIdentifier:(id)arg1;
+ (id)db_mapOfActionTypesAndIdentifiers;
+ (void)performAction:(id)arg1 forUserId:(id)arg2;
+ (void)db_openDocScannerRepresentedByAction:(id)arg1 forUserId:(id)arg2;
+ (id)db_userFileEntryFromBlueNoteAction:(id)arg1 forUserId:(id)arg2;
+ (void)db_mountSharedFolderRepresentedByAction:(id)arg1;
+ (void)db_openLinkComputerForUserId:(id)arg1;
+ (void)db_deepLinkToUpgradeForUserId:(id)arg1;
+ (void)db_dismissModalsAndSelectTab:(unsigned long long)arg1;
+ (void)db_openItemRepresentedByAction:(id)arg1 forUserId:(id)arg2 showComments:(_Bool)arg3 isFolder:(_Bool)arg4;
+ (void)db_openPathWithAction:(id)arg1 userId:(id)arg2 showComments:(_Bool)arg3 isFolder:(_Bool)arg4;
+ (void)db_openShmodelWithAction:(id)arg1 showComments:(_Bool)arg2;
@property(readonly, nonatomic) NSString *sharedContentUrl; // @synthesize sharedContentUrl=_sharedContentUrl;
@property(readonly, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(readonly, nonatomic) NSURL *shmodelURL; // @synthesize shmodelURL=_shmodelURL;
@property(readonly, nonatomic) DBDropboxPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initFromButtonAction:(id)arg1;
- (id)initWithLabel:(id)arg1 forActionName:(id)arg2 withParams:(id)arg3;

@end
