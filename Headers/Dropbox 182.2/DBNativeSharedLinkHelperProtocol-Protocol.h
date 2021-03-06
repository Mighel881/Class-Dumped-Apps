//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBFileOpenContext, DBNativeSharedLinkPasswordViewController, DBSharedLinkState, DBStateContext, DBUserState, NSDictionary, NSError, NSString, NSURL;
@protocol DBFileEntry;

@protocol DBNativeSharedLinkHelperProtocol <NSObject>
+ (void)showSaveToDropboxNativeSharedLinkFileAlreadyExistsMessage;
+ (void)showSaveToDropboxNativeSharedLinkError:(NSError *)arg1 forFileEntry:(id <DBFileEntry>)arg2 inUserAccount:(DBUserState *)arg3;
+ (void)showNativeSharedLinkError:(NSError *)arg1;
+ (void)openFileEntryAfterSignIn:(id <DBFileEntry>)arg1 linkState:(DBSharedLinkState *)arg2 openContext:(DBFileOpenContext *)arg3;
+ (void)saveFileEntryAfterSignIn:(id <DBFileEntry>)arg1 linkState:(DBSharedLinkState *)arg2 signInBlock:(void (^)(void))arg3;
+ (void)saveWithURL:(NSURL *)arg1 dbStateContext:(DBStateContext *)arg2;
+ (void)handlePasswordCompletionFromViewController:(DBNativeSharedLinkPasswordViewController *)arg1;
+ (void)presentWithLinkString:(NSString *)arg1 fileOpenContext:(DBFileOpenContext *)arg2 dbStateContext:(DBStateContext *)arg3;
+ (void)presentWithLinkString:(NSString *)arg1;
+ (void)presentWithLinkString:(NSString *)arg1 queryParams:(NSDictionary *)arg2 completionBlock:(void (^)(NSError *, _Bool, NSString *))arg3 dbStateContext:(DBStateContext *)arg4 afterSuccessfulMount:(_Bool)arg5;
+ (void)presentWithWebURL:(NSString *)arg1 dbStateContext:(DBStateContext *)arg2;
+ (void)presentWithAppURL:(NSURL *)arg1 dbStateContext:(DBStateContext *)arg2;
@end

