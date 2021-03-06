//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBTokenFieldDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface DBTokenFieldArrayDataSource : NSObject <DBTokenFieldDataSource>
{
    NSMutableArray *_representedObjects;
    unsigned long long _maxSize;
}

@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void).cxx_destruct;
- (_Bool)tokenFieldCanAddToken:(id)arg1;
- (_Bool)hasContentInTokenField:(id)arg1;
- (id)summarizeTokenField:(id)arg1;
- (void)tokenField:(id)arg1 configureSummaryView:(id)arg2;
- (void)tokenField:(id)arg1 configureTokenCell:(id)arg2 forIndex:(unsigned long long)arg3 tokenized:(_Bool)arg4;
- (void)tokenField:(id)arg1 removeTokenAtIndex:(unsigned long long)arg2;
- (id)representedObjectForNewTokenInTokenField:(id)arg1;
- (unsigned long long)tokenFieldAddNewToken:(id)arg1;
- (void)tokenField:(id)arg1 acceptRepresentedObject:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tokenField:(id)arg1 acceptInput:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfTokensInTokenField:(id)arg1;
- (id)representedObjectsAfterAcceptingInput:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSMutableArray *mutableRepresentedObjects;
@property(readonly, nonatomic) NSArray *representedObjects;
- (id)initWithArray:(id)arg1 maximumSize:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

