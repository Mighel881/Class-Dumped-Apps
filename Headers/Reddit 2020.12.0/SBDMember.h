//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDUser.h>

@interface SBDMember : SBDUser
{
    _Bool _isBlockedByMe;
    _Bool _isBlockingMe;
    long long _state;
}

+ (id)buildFromSerializedData:(id)arg1;
@property _Bool isBlockingMe; // @synthesize isBlockingMe=_isBlockingMe;
@property _Bool isBlockedByMe; // @synthesize isBlockedByMe=_isBlockedByMe;
@property long long state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;
- (id)_toDictionary;
- (id)serialize;

@end

