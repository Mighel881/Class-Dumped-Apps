//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWELiveEpidCellMapModel : NSObject
{
    NSString *_roomInfo;
    long long _liveType;
    NSString *_byteLiveSchema;
    NSString *_byteLiveStatusURL;
}

@property(copy, nonatomic) NSString *byteLiveStatusURL; // @synthesize byteLiveStatusURL=_byteLiveStatusURL;
@property(copy, nonatomic) NSString *byteLiveSchema; // @synthesize byteLiveSchema=_byteLiveSchema;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(copy, nonatomic) NSString *roomInfo; // @synthesize roomInfo=_roomInfo;
- (void).cxx_destruct;
- (id)initWithLiveModel:(id)arg1;

@end
