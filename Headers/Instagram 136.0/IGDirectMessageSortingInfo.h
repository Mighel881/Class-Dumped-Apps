//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate;

@interface IGDirectMessageSortingInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isOutgoing;
    NSDate *_primarySortingDate;
    NSDate *_secondarySortingDate;
}

@property(readonly, nonatomic) _Bool isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(readonly, copy, nonatomic) NSDate *secondarySortingDate; // @synthesize secondarySortingDate=_secondarySortingDate;
@property(readonly, copy, nonatomic) NSDate *primarySortingDate; // @synthesize primarySortingDate=_primarySortingDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPrimarySortingDate:(id)arg1 secondarySortingDate:(id)arg2 isOutgoing:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

