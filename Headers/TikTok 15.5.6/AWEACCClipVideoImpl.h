//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCClipVideoProtocol-Protocol.h"

@class NSString;

@interface AWEACCClipVideoImpl : NSObject <ACCClipVideoProtocol>
{
}

- (id)clipViewController:(id)arg1 maxClipDuration:(double)arg2 clipedResultSavePath:(id)arg3 allowFastImport:(_Bool)arg4 allowSpeedControl:(_Bool)arg5 inputData:(id)arg6 completion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
