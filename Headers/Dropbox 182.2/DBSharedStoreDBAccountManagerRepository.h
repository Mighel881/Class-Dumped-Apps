//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBAccountManagerAccountRepositoryProtocolWithAccountData-Protocol.h>

@protocol DBAccountDelegate;

@interface DBSharedStoreDBAccountManagerRepository : NSObject <DBAccountManagerAccountRepositoryProtocolWithAccountData>
{
    // Error parsing type: , name: sharedStoreDataKey
    // Error parsing type: , name: loggerTag
    // Error parsing type: , name: updateEmitter
    // Error parsing type: , name: internalSharedStore
    // Error parsing type: , name: accountDelegate
    // Error parsing type: , name: accountCreator
}

- (void).cxx_destruct;
- (id)init;
- (void)deleteSavedAccounts;
- (void)saveAccounts:(id)arg1;
- (id)savedAccountDatasWithError:(id *)arg1;
@property(nonatomic) __weak id <DBAccountDelegate> accountDelegate; // @synthesize accountDelegate;

@end
