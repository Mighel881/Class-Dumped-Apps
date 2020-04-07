//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PSPDFDatabase;
@protocol OS_dispatch_queue, PSPDFDatabaseEncryptionProvider;

@interface PSPDFDatabaseQueue : NSObject
{
    NSString *_path;
    PSPDFDatabase *_db;
    NSObject<OS_dispatch_queue> *_queue;
    id <PSPDFDatabaseEncryptionProvider> _databaseEncryptionProvider;
}

@property(retain, nonatomic) id <PSPDFDatabaseEncryptionProvider> databaseEncryptionProvider; // @synthesize databaseEncryptionProvider=_databaseEncryptionProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSPDFDatabase *db; // @synthesize db=_db;
@property(copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inDeferredTransactionAsync:(CDUnknownBlockType)arg1 afterCommit:(CDUnknownBlockType)arg2;
- (void)inDeferredTransactionAsync:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1 afterCommit:(CDUnknownBlockType)arg2;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 async:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3 afterCommit:(CDUnknownBlockType)arg4;
- (void)inDatabaseAsync:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1 encryptionKey:(id)arg2 databaseEncryptionProvider:(id)arg3;

@end
