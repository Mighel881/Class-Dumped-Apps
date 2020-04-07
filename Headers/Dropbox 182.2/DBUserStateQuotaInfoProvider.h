//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBUserQuotaInfoProvider-Protocol.h"

@class DBObserverBlockMap, NSMutableArray, NSString;
@protocol DBQuotaInfo;

@interface DBUserStateQuotaInfoProvider : NSObject <DBUserQuotaInfoProvider>
{
    CDUnknownBlockType _updateBlock;
    DBObserverBlockMap *_observersMap;
    _Bool _hasPendingRequest;
    NSMutableArray *_completionBlocks;
    unsigned long long _memberSpaceLimitsType;
    id <DBQuotaInfo> _visibilityQuotaInfo;
    id <DBQuotaInfo> _teamQuotaInfo;
    id <DBQuotaInfo> _accountQuotaInfo;
}

+ (unsigned long long)db_unusedQuotaFromQuota:(id)arg1;
- (void).cxx_destruct;
- (void)db_invokeCompletionBlocksWithSuccess:(_Bool)arg1;
- (id)addQuotaUpdateObserver:(CDUnknownBlockType)arg1;
- (void)requestQuotaInfoUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)db_updateWithAccountInfo:(id)arg1;
- (id)teamQuotaForDisplay;
- (id)quotaForDisplay;
- (unsigned long long)unusedQuota;
- (_Bool)updateWithAccountInfo:(id)arg1;
- (id)initWithAccountInfo:(id)arg1 requestUpdateBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
