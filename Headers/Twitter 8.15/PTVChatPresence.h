//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVChatPresence : NSObject
{
    NSString *_room;
    unsigned long long _occupancy;
    unsigned long long _totalParticipants;
    unsigned long long _type;
}

+ (id)presenceFromDict:(id)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long totalParticipants; // @synthesize totalParticipants=_totalParticipants;
@property(nonatomic) unsigned long long occupancy; // @synthesize occupancy=_occupancy;
@property(readonly, nonatomic) NSString *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg1 occupancy:(unsigned long long)arg2 totalParticipants:(unsigned long long)arg3 type:(unsigned long long)arg4;

@end
