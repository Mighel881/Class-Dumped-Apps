//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class WAGroupMember, WATableRow;

@interface WAParticipantControllerItem : NSObject <NSCopying>
{
    WAGroupMember *_participant;
    WATableRow *_row;
}

+ (id)itemForRow:(id)arg1;
+ (id)itemForGroupParticipant:(id)arg1;
@property(readonly, nonatomic) WATableRow *row; // @synthesize row=_row;
@property(readonly, nonatomic) WAGroupMember *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initPrivate;

@end

