//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ConversationNode.h>

@class T1URTTimelineTombstoneItemViewModel;

@interface T1ConversationTombstoneNode : T1ConversationNode
{
    T1URTTimelineTombstoneItemViewModel *_tombstoneItemViewModel;
}

@property(readonly, nonatomic) T1URTTimelineTombstoneItemViewModel *tombstoneItemViewModel; // @synthesize tombstoneItemViewModel=_tombstoneItemViewModel;
- (void).cxx_destruct;
- (id)initWithTombstone:(id)arg1 entryID:(id)arg2;

@end

