//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTMsgDetailedInfoMessage : NSObject
{
    int _responseLength;
    int _status;
    long long _responseMessageId;
}

@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) int responseLength; // @synthesize responseLength=_responseLength;
@property(readonly, nonatomic) long long responseMessageId; // @synthesize responseMessageId=_responseMessageId;
- (id)initWithResponseMessageId:(long long)arg1 responseLength:(int)arg2 status:(int)arg3;

@end
