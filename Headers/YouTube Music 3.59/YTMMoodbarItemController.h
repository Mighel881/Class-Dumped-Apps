//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, NSMutableSet, YTIMusicMoodItem, YTPlayerPrebufferConfig;

@interface YTMMoodbarItemController : NSObject
{
    NSMutableSet *_playlistIDs;
    unsigned long long _currentStationIndex;
    NSMutableDictionary *_prefetchTasks;
    YTPlayerPrebufferConfig *_prebufferConfig;
    _Bool _selected;
    GIMMe *_gimme;
    YTIMusicMoodItem *_moodItem;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) YTIMusicMoodItem *moodItem; // @synthesize moodItem=_moodItem;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)prefetchWatchEndpointAtStationIndex:(unsigned long long)arg1;
- (unsigned long long)nextStationIndex;
- (unsigned long long)indexForStationMatchingPlaylistID:(id)arg1;
- (_Bool)containsPlaylistID:(id)arg1;
- (void)updateStationMatchingEndpoint:(id)arg1 withStartTime:(double)arg2;
- (void)prefetchNextStation;
- (void)prefetchCurrentStation;
- (void)moveToNextMoodStation;
- (void)changeCurrentStationToMatchPlaylistID:(id)arg1;
- (id)playlistIDForCurrentMoodStation;
- (id)currentMoodStation;
- (id)initWithMusicMoodItem:(id)arg1;

@end

