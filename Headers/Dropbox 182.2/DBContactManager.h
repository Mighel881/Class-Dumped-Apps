//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBContactManagerAccountPhotoFetching-Protocol.h>
#import <DropboxExtensions/DBContactManagerContactFetching-Protocol.h>

@class CNContactStore, NSCache, NSDictionary, NSMutableDictionary;

@interface DBContactManager : NSObject <DBContactManagerAccountPhotoFetching, DBContactManagerContactFetching>
{
    shared_ptr_35324e97 _contact_manager;
    NSMutableDictionary *_meContactListeners;
    NSMutableDictionary *_accountPhotoListeners;
    struct shared_ptr<DbxContactManagerUpdateListenerImpl> _updateListener;
    shared_ptr_1472566f _localContacts;
    NSCache *_avatarCache;
    _Bool _suppressUploadingLocalContacts;
    _Bool _localAddressBookScanned;
    NSDictionary *_contactValueToRecordID;
    NSCache *_accountPhotoCache;
    CNContactStore *_contactStore;
}

+ (_Bool)db_hasContactsAuthorization;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSCache *accountPhotoCache; // @synthesize accountPhotoCache=_accountPhotoCache;
@property(retain, nonatomic) NSDictionary *contactValueToRecordID; // @synthesize contactValueToRecordID=_contactValueToRecordID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSuppressUploadingLocalContactsAndUpdateContacts:(_Bool)arg1;
- (void)shutdown;
- (id)accountPhotoForContact:(id)arg1;
- (id)accountPhotoForAccountId:(id)arg1;
- (void)accountPhotoForAccountId:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)meContactAccountPhoto;
- (id)meContact;
- (id)contactWithAccountId:(id)arg1;
- (id)contactWithEmailAddress:(id)arg1;
- (unordered_set_f0878912)db_transformToSetOfContactTypes:(id)arg1;
- (id)searchContactsOfTypes:(id)arg1 forString:(id)arg2;
- (id)searchContactsForString:(id)arg1;
- (void)db_backgroundUpdateContacts:(_Bool)arg1 skipRedundantScanning:(_Bool)arg2;
- (void)scanLocalAddressBook;
- (void)updateContactsForce:(_Bool)arg1 skipRedundantScanning:(_Bool)arg2;
- (void)updateContactsForce:(_Bool)arg1;
- (void)updateContacts;
- (void)setLocalContacts:(const shared_ptr_1472566f *)arg1;
- (shared_ptr_1472566f)localContacts;
- (void)db_contactsChanged:(id)arg1;
- (void)db_registerAddressBookUpdateNotification;
- (void)dealloc;
- (id)initWithContactManagerV2:(id)arg1;
- (id)initWithCppContactManager:(const shared_ptr_35324e97 *)arg1;

@end
