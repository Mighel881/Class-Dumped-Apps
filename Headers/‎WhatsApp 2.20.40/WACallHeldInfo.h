//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACallCommonInfo.h"

@class WACallLogInfo;

@interface WACallHeldInfo : WACallCommonInfo
{
    WACallLogInfo *_callLogInfo;
}

@property(readonly, nonatomic) WACallLogInfo *callLogInfo; // @synthesize callLogInfo=_callLogInfo;
- (void).cxx_destruct;
- (id)initWithHeldCallInfo:(CDStruct_e34aa733)arg1;

@end

