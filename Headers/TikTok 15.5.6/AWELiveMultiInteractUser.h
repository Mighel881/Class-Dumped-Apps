//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWELiveMultiInteractUser : MTLModel <MTLJSONSerializing>
{
    NSNumber *_userID;
    NSString *_nickName;
    AWEURLModel *_avatarMedium;
    NSNumber *_linkStatus;
    NSNumber *_linkMicIndex;
}

+ (id)avatarMediumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSNumber *linkMicIndex; // @synthesize linkMicIndex=_linkMicIndex;
@property(retain, nonatomic) NSNumber *linkStatus; // @synthesize linkStatus=_linkStatus;
@property(retain, nonatomic) AWEURLModel *avatarMedium; // @synthesize avatarMedium=_avatarMedium;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

