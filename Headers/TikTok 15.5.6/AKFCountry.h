//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AKFCountry : NSObject <NSCopying>
{
    NSString *_emojiFlag;
    unsigned long long _dialingCode;
    NSString *_ISO;
    NSString *_name;
}

@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *ISO; // @synthesize ISO=_ISO;
@property(readonly, nonatomic) unsigned long long dialingCode; // @synthesize dialingCode=_dialingCode;
- (void).cxx_destruct;
- (id)_calculateEmojiFlag;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (_Bool)isEqualToCountry:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *emojiFlag; // @synthesize emojiFlag=_emojiFlag;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 ISO:(id)arg2 dialingCode:(unsigned long long)arg3;

@end

