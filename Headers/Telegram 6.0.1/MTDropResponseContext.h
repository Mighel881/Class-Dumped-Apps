//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTDropResponseContext : NSObject
{
    int _messageSeqNo;
    long long _dropMessageId;
    long long _messageId;
}

@property(nonatomic) int messageSeqNo; // @synthesize messageSeqNo=_messageSeqNo;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long dropMessageId; // @synthesize dropMessageId=_dropMessageId;
- (id)initWithDropMessageId:(long long)arg1;

@end

